#include <Windows.h>

#include <iostream>
#include <string_view>
#include <optional>
#include <array>
#include <filesystem>

#include <sstream>
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

const char* default_process_name = "Among Us.exe";

int main(int argc, const char** argv)
{
    using namespace std::string_view_literals;

    std::string module_name = "arkena_mod";
    std::string process_name = "Among Us.exe";


    // get path of DLL
    std::array<char, MAX_PATH> module_path{};
    ::GetFullPathNameA(module_name.c_str(), module_path.size(), module_path.data(), nullptr);

    auto ids = find_process(process_name);

    if (ids.size() == 0)
    {
        std::cout << process_name << " not found";
        return 0;
    }

    for (int i = 0; i < ids.size(); ++i)
    {
        std::cout << "injecting in PID " << ids[i] << "..." << "\n";
        HANDLE process_handle = ::OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, ids[i]);


        auto module_instance_name = module_name + std::to_string(i);
        auto module_instance_path = module_path.data() + std::to_string(i) + ".dll";


            LPVOID allocated_memory = ::VirtualAllocEx(process_handle, nullptr, module_instance_path.size(), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
            ::WriteProcessMemory(process_handle, allocated_memory, module_instance_path.c_str(), module_instance_path.size(), nullptr);
            auto r = ::CreateRemoteThread(process_handle, nullptr, 0, (LPTHREAD_START_ROUTINE) LoadLibraryA, allocated_memory, 0, nullptr);
            std::cout << "injection " << module_instance_path << " succeed" << "\n";


        ::CloseHandle(process_handle);
    }

    return 0;
}