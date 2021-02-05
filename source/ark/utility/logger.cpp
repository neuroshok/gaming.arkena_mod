#include <ark/utility/logger.hpp>

#include <ark/utility/logger.hpp>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include <filesystem>
#include <iostream>

void init_logger()
{
    auto file_path = std::filesystem::temp_directory_path() / "arkmongus_logs.txt";
    if (std::filesystem::exists(file_path)) std::filesystem::remove(file_path);
    std::cout << "Log to: " <<file_path << "\n";

    auto file_logger = spdlog::basic_logger_mt("arkena_mod", file_path.string());
    auto logger = std::make_shared<spdlog::logger>("ark");

    logger->sinks().emplace_back(std::make_shared<spdlog::sinks::wincolor_stdout_sink_mt>());

    file_logger->set_level(spdlog::level::trace);
    logger->set_level(spdlog::level::trace);
    file_logger->flush_on(spdlog::level::trace);
    logger->flush_on(spdlog::level::trace);

    spdlog::set_default_logger(logger);
}
