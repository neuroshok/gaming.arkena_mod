#include "meta.hpp"

namespace meta
{
    std::vector<std::unique_ptr<meta::klass>> klasses;

    void clean_name(std::string& name)
    {
        str_replace(name, ".ctor", "ctor");
        str_replace(name, ".cctor", "cctor");
        str_replace(name, "<", "");
        str_replace(name, ">", "");
        str_replace(name, "[", "");
        str_replace(name, "]", "");
        str_replace(name, ",", "");
        str_replace(name, "=", "");
        str_replace(name, "|", "");
        str_replace(name, ".", "::");
    }
} // meta