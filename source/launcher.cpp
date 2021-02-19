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

std::optional<DWORD> find_process(std::string_view name) {
    HANDLE snapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
    PROCESSENTRY32 process_entry{};
    process_entry.dwSize = sizeof(process_entry);

    std::optional<DWORD> result;

    if (Process32First(snapshot, &process_entry) == TRUE) {
        do {
            if (process_entry.szExeFile == name)
            {
                result = process_entry.th32ProcessID;
                break;
            }
        } while (Process32Next(snapshot, &process_entry) == TRUE);
    }

    ::CloseHandle(snapshot);
    return result;
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

    //std::string path { R"("C:\Program Files (x86)\Steam\steam.exe")" };
    std::array<char, 1024> path{};
    ExpandEnvironmentStringsA("%systemroot%\\explorer.exe", path.data(), path.size());
    std::string args { " steam://rungameid/945360" };
    ShellExecute(nullptr, "open", path.data(), args.data(), nullptr, 1);

    //

    const char* short_dll_path = default_dll_name;
    const char* process_name = default_process_name;

    // get path of DLL
    std::array<char, MAX_PATH> dll_path{};
    ::GetFullPathNameA(short_dll_path, dll_path.size(), dll_path.data(), nullptr);

    // get process

    int tries = 0;
    std::optional<DWORD> process_id;
    while (!(process_id = find_process(process_name)))
    {
        if (tries++ == 30)
        {
            error_message{} << "Unable to find process '" << process_name << "'\n";
            return 1;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    HANDLE process_handle = ::OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, process_id.value());

    // fix hook init fail, wait for process start
    std::this_thread::sleep_for(std::chrono::seconds(3));

    if (!process_has_dll(process_handle, dll_path.data()))
    {
        LPVOID allocated_memory = ::VirtualAllocEx(process_handle, nullptr, dll_path.size(), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

        ::WriteProcessMemory(process_handle, allocated_memory, dll_path.data(), dll_path.size(), nullptr);
        ::CreateRemoteThread(process_handle, nullptr, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, allocated_memory, 0, nullptr);
    }
    else error_message{} << "dll " << dll_path.data() << " is already loaded into '" << process_name << "'\n";

    ::CloseHandle(process_handle);

    return 0;
}