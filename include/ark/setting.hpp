#pragma once

#include <array>
#include <string>
#include <variant>

namespace ark
{
    struct setting
    {
        friend class ui::core;
        using value_type = std::variant<std::string, int, float>;
        using buffer_type = std::array<char, 64>;

        setting(std::string name_, setting::value_type value_, std::string description_ = "")
            : name{ std::move(name_) }
            , value{ std::move(value_) }
            , description{ std::move(description_) }
        {
            //ui_buffer = std::make_shared<buffer_type>(to_string());

        }

        setting(const setting&) = delete;
        setting& operator=(const setting&) = delete;

        std::string name;
        setting::value_type value;
        std::string description;

        template<class T>
        T get() const
        {
            ark_trace("__{}", std::get<T>(value));
            return std::get<T>(value);
        }

        void update(const std::string& str_value)
        {
            std::visit(
            [&str_value, this](auto&& arg) {
                using T = std::decay_t<decltype(arg)>;
                if constexpr (std::is_same_v<T, int>) std::get<int>(value) = std::stoi(str_value);
                else if constexpr (std::is_same_v<T, float>) std::get<float>(value) = std::stof(str_value);
                else if constexpr (std::is_same_v<T, std::string>)
                {
                    std::get<std::string>(value) = str_value;
                    ark_trace("{}-{}", std::get<std::string>(value), str_value);
                }

            }, value);
        }

        std::string to_string() const
        {
            return std::visit(
            [this](auto&& arg) {
                using T = std::decay_t<decltype(arg)>;
                if constexpr (std::is_same_v<T, int>) return std::to_string(std::get<int>(value));
                else if constexpr (std::is_same_v<T, float>) return std::to_string(std::get<float>(value));
                else if constexpr (std::is_same_v<T, std::string>) return std::get<std::string>(value);
                else return "error";
            }, value);
        }

    private:
        mutable std::shared_ptr<buffer_type> ui_buffer;
    };
} // ark