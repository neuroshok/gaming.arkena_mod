#include <Windows.h>

#include <iostream>
#include <string_view>
#include <optional>
#include <array>
#include <filesystem>

#include <sstream>
#include <atlstr.h>
#include <TlHelp32.h>
#include <psapi.h>
#include <shellapi.h>

#include <thread>
#include <chrono>
#include <optional>

class error_message {
    std::stringstream m_stream;

public:
    ~error_message() {
        ::MessageBoxA(nullptr, m_stream.str().c_str(), "Injector", MB_ICONERROR);
    }

    template <class T>
    error_message& operator<<(const T& value) {
        m_stream << value;
        std::cerr << value;
        return *this;
    }
};

std::vector<DWORD> find_process(std::string_view name) {
    HANDLE snapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
    PROCESSENTRY32 process_entry{};
    process_entry.dwSize = sizeof(process_entry);

    std::vector<DWORD> results;

    if (Process32First(snapshot, &process_entry) == TRUE) {
        do {
            if (process_entry.szExeFile == name)
            {
                results.push_back(process_entry.th32ProcessID);
            }
        } while (Process32Next(snapshot, &process_entry) == TRUE);
    }

    ::CloseHandle(snapshot);
    return results;
}

bool process_has_dll(HANDLE process_handle, std::string_view dll_path) {
    std::array<HMODULE, 1024> modules;

    // Get a list of all the modules in this process.
    DWORD out_size = 0;
    if (!EnumProcessModules(process_handle, modules.data(), sizeof(modules), &out_size)) {
        return false;
    }

    for (std::size_t i = 0; i < out_size / sizeof(HMODULE); i++) {
        std::array<char, MAX_PATH> module_name{};

        // Get the full path to the module's file.
        if (GetModuleFileNameExA(process_handle, modules[i], module_name.data(), module_name.size())) {
            if (std::filesystem::path(module_name.data()).filename() == std::filesystem::path(dll_path).filename()) {
                return true;
            }
        }
    }

    return false;
}

const char* default_dll_name = "arkena_mod.dll";
const char* default_process_name = "Among Us.exe";

int main(int argc, const char** argv)
{
    using namespace std::string_view_literals;

    const char* short_dll_path = default_dll_name;
    const char* process_name = default_process_name;

    // get path of DLL
    std::array<char, MAX_PATH> dll_path{};
    ::GetFullPathNameA(short_dll_path, dll_path.size(), dll_path.data(), nullptr);

    auto ids = find_process(process_name);
    std::cout << ids.size();

    if (ids.size() == 0)
    {
        std::cout << "dll not found";
        return 0;
    }

    for (const auto& id : ids)
    {
        HANDLE process_handle = ::OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, id);


        if (!process_has_dll(process_handle, dll_path.data()))
        {
            LPVOID allocated_memory = ::VirtualAllocEx(process_handle, nullptr, dll_path.size(), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
            ::WriteProcessMemory(process_handle, allocated_memory, dll_path.data(), dll_path.size(), nullptr);
            auto r = ::CreateRemoteThread(process_handle, nullptr, 0, (LPTHREAD_START_ROUTINE) LoadLibraryA, allocated_memory, 0, nullptr);
            std::cout << "injection ok " << r;
        } else
        {
            std::cout << "already loaded, try reload" << "\n";

            LPVOID allocated_memory = ::VirtualAllocEx(process_handle, nullptr, dll_path.size(), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
            ::WriteProcessMemory(process_handle, allocated_memory, dll_path.data(), dll_path.size(), nullptr);
            auto r = ::CreateRemoteThread(process_handle, nullptr, 0, (LPTHREAD_START_ROUTINE) LoadLibraryA, allocated_memory, 0, nullptr);
            std::cout << "reload ok " << r;
        }

        ::CloseHandle(process_handle);
    }

    return 0;
}