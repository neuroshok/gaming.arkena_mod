#include <ark/log.hpp>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/wincolor_sink.h>

#include <cstdint>
#include <filesystem>
#include <iostream>

namespace ark
{
    void init_logger(std::uintptr_t id)
    {
        //auto file_name = "arkmongus_logs" + std::to_string((unsigned)id) + ".txt";
        auto file_name = "arkmongus_logs.txt";
        auto file_path = std::filesystem::temp_directory_path() / file_name;
        if (std::filesystem::exists(file_path)) std::filesystem::remove(file_path);
        std::cout << "Log to: " << file_path << "\n";

        auto file_logger = spdlog::basic_logger_mt("arkena_mod", file_path.string());
        auto logger = std::make_shared<spdlog::logger>("ark");

        logger->sinks().emplace_back(std::make_shared<spdlog::sinks::wincolor_stdout_sink_mt>());

        file_logger->set_level(spdlog::level::critical);
        logger->set_level(spdlog::level::trace);

        //file_logger->flush_on(spdlog::level::trace);
        logger->flush_on(spdlog::level::trace);

        spdlog::set_default_logger(logger);
    }
} // ark