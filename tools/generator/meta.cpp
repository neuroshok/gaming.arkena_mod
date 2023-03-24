#include "meta.hpp"

namespace meta
{
    std::vector<std::unique_ptr<meta::klass>> klasses;

    void clean_name(std::string& name)
    {
        str_replace(name, ".ctor", "ctor");
        str_replace(name, ".cctor", "cctor");
        // some symbols start with <> followed by a number so we need a '_' at the start
        str_replace(name, "<", "_");
        str_replace(name, ">", "_");

        str_replace(name, "[", "");
        str_replace(name, "]", "");
        str_replace(name, ",", "");
        str_replace(name, "=", "");
        str_replace(name, "|", "");
        str_replace(name, ".", "::");
    }
} // meta