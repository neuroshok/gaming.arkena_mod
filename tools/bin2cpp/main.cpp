#include <filesystem>
#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>
#include <vector>

namespace fs = std::filesystem;

void encode(const std::string& resource_name)
{
    std::ifstream ifs("../resource/graphic/" + resource_name + ".png", std::ios::binary);
    if (!ifs.is_open()) throw "input file not found";

    std::vector<unsigned char> data(std::istreambuf_iterator<char>(ifs), {});
    ifs.close();

    std::ofstream ofs("../source/ark/resource/embed/" + resource_name + ".cpp");
    if (!ofs.is_open()) throw "output file not found";

    std::string header = "#include <ark/resource.hpp>\n\n";
    header += "static const unsigned char raw_data[] = {\n";

    ofs.write(header.data(), header.size());

    for (const auto& byte : data)
    {
        auto out = std::to_string(byte) + ", ";
        ofs.write(out.data(), out.size());
    }

    std::string footer = "};\n\n";
    footer += "ark::resource::image ark::resources::" + resource_name + " = { .size = " + std::to_string(data.size()) + ", .data = raw_data };";


    ofs.write(footer.data(), footer.size());

    ofs.close();
}

int main()
{
    std::string resource_path = "../resource/graphic/";
    std::string resource_name = "mod";

    for (auto& entry : fs::directory_iterator(resource_path))
    {
        std::cout << "\nProcessing " << entry.path().stem() << " at " << entry.path().generic_string();
        encode(entry.path().stem().generic_string());
    }

    return 0;
}