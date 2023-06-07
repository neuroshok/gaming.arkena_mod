#include <ark/log.hpp>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>


#include <filesystem>
#include <iostream>

namespace ark
{
    void init_logger(std::uintptr_t id)
    {
        auto file_name = "arkmongus_logs" + std::to_string((unsigned)id) + ".txt";
        auto file_path = std::filesystem::temp_directory_path() / file_name;
        if (std::filesystem::exists(file_path)) std::filesystem::remove(file_path);
        std::cout << "Log to: " << file_path << "\n";

        auto file_logger = spdlog::basic_logger_mt("file", file_path.string());
        auto logger = std::make_shared<spdlog::logger>("core");

        logger->sinks().emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());

        file_logger->set_level(spdlog::level::critical);
        logger->set_level(spdlog::level::trace);

        //file_logger->flush_on(spdlog::level::trace);
        logger->flush_on(spdlog::level::trace);

        spdlog::set_default_logger(logger);
    }

    void error(const std::string& message)
    {
    #ifdef __ANDROID__
        __android_log_print(ANDROID_LOG_ERROR, "ARK", "%s", message.c_str());
    #else
        spdlog::get("file")->error(message);
        spdlog::get("core")->error(message);
    #endif
    }
    void info(const std::string& message)
    {
    #ifdef __ANDROID__
        __android_log_print(ANDROID_LOG_INFO, "ARK", "%s", message.c_str());
    #else
        spdlog::get("file")->info(message);
        spdlog::get("core")->info(message);
    #endif
    }
    void trace(const std::string& message)
    {
        spdlog::get("file")->trace(message);
        spdlog::get("core")->trace(message);
    }
} // ark