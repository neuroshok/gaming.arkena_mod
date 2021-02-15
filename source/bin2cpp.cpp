#include <string>
#include <vector>
#include <fstream>
#include <streambuf>

int main()
{
    std::ifstream ifs("../resource/graphic/ark.png", std::ios::binary);
    if (!ifs.is_open()) throw "file not found";

    std::vector<unsigned char> data(std::istreambuf_iterator<char>(ifs), {});
    ifs.close();

    std::ofstream ofs("../source/ark/ui/resource/icon.cpp");

    std::string header = "#include <ark/ui/resource.hpp>\n\n";
    header += "static const unsigned char raw_data[] = {\n";

    ofs.write(header.data(), header.size());

    for (const auto& byte : data)
    {
        auto out = std::to_string(byte) + ", ";
        ofs.write(out.data(), out.size());
    }

    std::string footer = "};\n\n";
    footer += "static const ark::ui::resource::image icon = { .size = " + std::to_string(data.size()) + ", .data = raw_data };";


    ofs.write(footer.data(), footer.size());

    ofs.close();

    return 0;
}