#pragma once

#include "klass.hpp"
#include <functional>
#include <il2cpp/core.hpp>
#include <string>

using namespace il2cpp;

namespace meta
{
    class generator
    {
    public:
        generator(std::string input_path);

        void initialize();

        void process();
        void on_process(const std::function<void(const meta::klass&)>& fn);

        void make_klass(const meta::klass& klass);
        void make_deps(const klass& klass, std::stringstream& hpp_includes, std::stringstream& cpp_includes);
        std::stringstream make_statics(const meta::klass& klass);
        std::stringstream make_fields(const meta::klass& klass);
        std::stringstream make_methods(const meta::klass& klass, bool definition = false);

        void filter_image(const std::string& name);
        void filter_klass(const std::string& name);
        std::string indent(int n);

    private:
        il2cpp::Il2CppAssembly** assemblies_ = nullptr;
        size_t assembly_count_ = 0;
        std::string input_path_;
        std::string output_path_;
        std::vector<std::string> images_;
        std::vector<std::string> klasses_;
        std::function<void(const meta::klass&)> on_process_;
    };
} // meta