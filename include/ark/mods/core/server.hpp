#pragma once

namespace ark
{
    class mod;
} // 

namespace ark::mods
{
    class core_server
    {
    public:
        explicit core_server(ark::mod&);

        void enable();

    private:
        ark::mod& mod_core_;
    };
}// ark::mods