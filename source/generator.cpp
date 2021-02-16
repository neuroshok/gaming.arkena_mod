#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/*
using namespace std::string_literals;

enum class parse_type{ field, method };

struct method
{
    std::string name;
    std::string return_type;
    std::vector<std::string> parameters;
};

void generate_class(const std::vector<::method>& methods);


bool is_alphanum(char c) { return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'); }

std::string word_to_cpp(const std::string& word)
{
    if (word == "IEnumerator") return "void";
    return word;
}

auto consume_word(std::string& method_line)
{
    int i = 0;
    while(is_alphanum(method_line[i])) ++i;
    auto word = method_line.substr(0, i);
    method_line = method_line.substr(i + 1);
    word = word_to_cpp(word);

    return word;
}

auto parse_method(const std::string& line)
{
    auto method_line = line;
    if (line.substr(0, 2) == "pu"s) method_line = method_line.substr(7);
    if (line.substr(0, 2) == "pr"s) method_line = method_line.substr(8);
    std::cout <<  ": " << method_line << "\n";

    ::method method;
    auto first = consume_word(method_line);
    if (first == "override") method.return_type = consume_word(method_line);
    else method.return_type = first;

    method.name = consume_word(method_line);

    return method;
}

void csto_tracer(int start, int end)
{
    std::string line;
    std::ifstream ifs{ "dump.cs" };
    int line_count = 0;
    if (!ifs.is_open())
    {
        std::cout << "cannot open file";
        return;
    }

    auto parsing_type = parse_type::field;
    std::vector<::method> methods;

    while (std::getline(ifs, line))
    {
        if (line_count >= end) break;
        if (line_count > start && line.size() > 0)
        {
            if (line == "\t// Methods") parsing_type = parse_type::method;

            if (parsing_type == parse_type::method && line.substr(1, 1) != "/" && line.substr(1, 1) != "[")
            {
                auto method = parse_method(line.substr(1));
                methods.emplace_back(method);
                //std::cout << line_count << ": " << line << "\n";
            }
        }
        ++line_count;
    }

    generate_class(methods);
    //generate_hook(methods);
}

void generate_class(const std::vector<::method>& methods)
{
    for (const auto& method : methods)
    {
        std::cout << "\n" << method.return_type << " " << method.name << "(" << ")";
    }
}*/

#include <Windows.h>
#include <il2cpp/core.hpp>
#include <spdlog/spdlog.h>


class assembly
{
public:
    assembly() : hmodule_{ LoadLibrary("GameAssembly.dll") } {}

    int init(const char* domain_name) { return process<int(*)(const char* domain_name)>("il2cpp_init", domain_name); }
    il2cpp::Il2CppDomain* domain_get() { return process<il2cpp::Il2CppDomain*(*)()>("il2cpp_domain_get"); }

    const il2cpp::Il2CppAssembly** domain_get_assemblies(const il2cpp::Il2CppDomain* d, size_t* s)
    { return process<const il2cpp::Il2CppAssembly**(*)(const il2cpp::Il2CppDomain*, size_t*)>("il2cpp_domain_get_assemblies", d, s); }
    decltype(auto) assembly_get_image(const il2cpp::Il2CppAssembly* as)
    { return process<const il2cpp::Il2CppImage*(*)(const il2cpp::Il2CppAssembly*)>("il2cpp_assembly_get_image", as); }
    decltype(auto) class_from_name(const il2cpp::Il2CppImage* img, const char* ns, const char* k)
    { return process<il2cpp::Il2CppClass*(*)(const il2cpp::Il2CppImage*, const char*, const char*)>("il2cpp_class_from_name", img, ns, k); }

    il2cpp::Il2CppClass* get_class(const char* namespace_, const char* class_)
    {
        spdlog::info("looking for class {} in namespace {}", class_, namespace_[0] ? namespace_ : "(none)");
        auto dom = domain_get();
        std::cout << dom->default_context;
        return nullptr;
        if (!init(dom->friendly_name)) spdlog::error("init error");

        std::size_t assembly_count = 0;
        const auto assemblies = domain_get_assemblies(dom, &assembly_count);
        std::cout << assemblies;

        for (auto it = assemblies; it != assemblies + assembly_count; ++it) {
            auto img = assembly_get_image(*it);
            if (!img) {
                spdlog::error("null assembly..");
                continue;
            }

            auto cls = class_from_name(img, namespace_, class_);
            if (!cls) {
                continue;
            }

            return cls;
        }

        spdlog::error("class not found {}:{}", class_, namespace_[0] ? namespace_ : "(none)");
        return nullptr;
    }

private:
    HMODULE hmodule_ = nullptr;


    template<class T, class... Args>
    decltype(auto) process(const char* name, Args&&... args)
    {
        return reinterpret_cast<T>(GetProcAddress(hmodule_, name))(std::forward<Args>(args)...);
    }
};






int main(int argc, const char** argv)
{
    //csto_tracer(436407, 436808);

    assembly as;
    auto v = as.get_class("", "NJAHILONGKN");
    spdlog::info(v->_2.field_count);

    //spdlog::debug("data {}", as.get_class("", "FFGALNAPKCD")->_2.field_count);

    return 0;
}