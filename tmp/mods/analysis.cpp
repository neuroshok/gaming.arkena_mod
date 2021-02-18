#include <ark/mods/analysis.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>

#include <autogen/InnerNet/InnerNetClient.hpp>

namespace ark::mods
{
    analysis::analysis(ark::core& pcore)
        : mod(pcore, "analysis")
    {

        hook<&InnerNet::InnerNetClient::Update>::before(this, [&](auto&& self)
        {
            ark_trace("hook 2");
        });

    }
} // ark