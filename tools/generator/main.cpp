#include "generator.hpp"
#include "klass.hpp"
#include "filter.hpp"

#include <il2cpp/api.hpp>
#include <spdlog/spdlog.h>
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;
using namespace std::string_literals;

std::string il2cpp_info(const Il2CppClass* klass);

int main()
{
    try
    {
        using namespace il2cpp;
        spdlog::set_level(spdlog::level::trace);

        meta::generator gen{ "D:\\game\\steam\\steamapps\\common\\Among Us" };
        //gen.filter_image("Assembly-CSharp.dll");
        gen.filter_klass("PlayerControl");

        //std::cout << il2cpp_info(gen.klasses_[120]);

        gen.on_process([&gen](const meta::klass& klass) {

            //std::cout << klass.type().info();

            return;
        });

        gen.process();

    } catch (const std::exception& e)
    {
        spdlog::error(e.what());
    }
    return 0;
}