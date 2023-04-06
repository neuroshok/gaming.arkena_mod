#include <ark/updater.hpp>

#include <restclient-cpp/connection.h>
#include <restclient-cpp/restclient.h>

namespace ark
{
    void updater::check()
    {
        // initialize RestClient
        RestClient::init();

        // get a connection object
        RestClient::Connection* conn = new RestClient::Connection("https://github.com");
    }
} // ark