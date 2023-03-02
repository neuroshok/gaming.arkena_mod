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

        ::generator gen{ "D:\\game\\steam\\steamapps\\common\\Among Us" };
        //add_filter(class_filter);

        //std::cout << il2cpp_info(gen.klasses_[120]);

        gen.process([&gen](const Il2CppClass* k) {
        ::klass klass{ k };

            std::cout << klass.info();
            return;
        });

        //gen.make_sources();

    } catch (const std::exception& e)
    {
        spdlog::error(e.what());
    }
    return 0;
}