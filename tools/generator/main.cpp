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

        ::generator gen{ "D:\\game\\steam\\steamapps\\common\\Among Us" };
        //add_filter(class_filter);

        gen.process([&gen](const Il2CppClass* klass) {
            std::string kname = klass->_1.name;

            auto v = api::type_get_assembly_qualified_name(api::class_get_type(klass));
            //std::cout << "\nGENERATE " << klass->_1.name << " " << klass->_1.typeDefinition->genericContainerIndex;
            //if (klass->_1.name == std::string("KeyCollection")) std::cout << "\n__" << api::type_get_name(api::class_get_type(klass)); //gen.make_cpp(klass);

        });

        gen.make_sources();

    } catch (const std::exception& e)
    {
        spdlog::error(e.what());
    }
    return 0;
}