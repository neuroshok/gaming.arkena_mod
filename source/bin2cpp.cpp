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
    if (!ifs.is_open()) throw "file not found";

    std::vector<unsigned char> data(std::istreambuf_iterator<char>(ifs), {});
    ifs.close();

    std::ofstream ofs("../source/ark/resource/" + resource_name + ".cpp");

    std::string header = "#include <ark/resource.hpp>\n\n";
    header += "static const unsigned char raw_data[] = {\n";

    ofs.write(header.data(), header.size());

    for (const auto& byte : data)
    {
        auto out = std::to_string(byte) + ", ";
        ofs.write(out.data(), out.size());
    }

    std::string footer = "};\n\n";
    footer += "ark::ui::image ark::ui::resource::icon = { .size = " + std::to_string(data.size()) + ", .data = raw_data };";


    ofs.write(footer.data(), footer.size());

    ofs.close();
}

int main()
{
    std::string resource_name = "button";

    for (auto& entry : fs::directory_iterator("../resource/graphic/"))
    {
        std::cout << "\nProcessing " << entry.path().stem();
        encode(entry.path().stem().u8string());
    }

    return 0;
}