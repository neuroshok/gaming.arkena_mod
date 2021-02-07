#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
}

int main(int argc, const char** argv)
{

    csto_tracer(436407, 436808);

    return 0;
}