#include "generator.hpp"
#include "filter.hpp"

#include <il2cpp/api.hpp>
#include <spdlog/spdlog.h>
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;
using namespace std::string_literals;

int main()
{
    try
    {
        using namespace il2cpp;
        spdlog::set_level(spdlog::level::trace);

        ::generator gen;
        //.add_filter(class_filter);

        gen.process([](const Il2CppClass* klass) {
            std::string kname = klass->_1.name;
            if (kname.substr(0, 3) == "Key")
            {
                auto v = api::type_get_assembly_qualified_name(api::class_get_type(klass));
                std::cout << "\n__" << klass->_1.name << " " << klass->_1.typeDefinition->genericContainerIndex;
            }
        });

        //gen.make_sources();
    } catch (const std::exception& e)
    {
        spdlog::error(e.what());
    }
    return 0;
}