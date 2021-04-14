#pragma once

#include <ark/log.hpp>

#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>

#include <string>

namespace upp
{
    // read
    template<class T> T read(Hazel::MessageReader* reader);

    template<class T> std::vector<T> read_vector(Hazel::MessageReader* reader)
    {
        std::uint32_t size = reader->ReadUInt32();
        ark_trace("size {}", size);
        std::vector<T> output;
        output.reserve(size);
        for (int i = 0; i < size; ++i)
        {
            if constexpr (sizeof(T) == 1)
                output.emplace_back(reader->ReadByte());
            else if constexpr (sizeof(T) == 2)
                output.emplace_back(reader->ReadUInt16());
            else if constexpr (sizeof(T) == 4)
                output.emplace_back(reader->ReadUInt32());
            else ark_trace("unsupported data");
        }
        ark_trace("read size {}", output.size());

        return output;
    }

    template<>
    inline std::string read(Hazel::MessageReader* reader)
    {
        std::uint32_t size = reader->ReadUInt32();
        std::string output;
        output.reserve(size);
        for (int i = 0; i < size; ++i) output += (char)reader->ReadByte();
        return output;
    }

    template<>
    inline ark::version read(Hazel::MessageReader* reader)
    {
        ark::version version;
        version.major = reader->ReadUInt32();
        version.minor = reader->ReadUInt32();
        version.fix = reader->ReadUInt32();
        return version;
    }

    // write
    template<class T>
    void write(Hazel::MessageWriter* writer, T&& data)
    {
        if constexpr (std::is_same_v<std::decay_t<T>, ark::version>)
        {
            writer->Write(data.major);
            writer->Write(data.minor);
            writer->Write(data.fix);
        }
        else if constexpr (std::is_same_v<std::decay_t<T>, std::string>)
        {
            writer->Write(std::uint32_t(data.size()));
            for (char i : data) writer->Write(i);
        }
        else writer->Write(data);
    }

    template<class T>
    void write(Hazel::MessageWriter* writer, const std::vector<T>& data)
    {
        writer->Write4(std::uint32_t(data.size()));
        for (T i : data) writer->Write(i);
    }
} // upp