#pragma once

#include <d3d11.h>
#include <stb_image.h>
#include <ark/log.hpp>

namespace ark::resource
{
    struct image;

    unsigned char* load_image(ark::resource::image& image);
    //UnityEngine::Texture2D* load_texture(resource::image&);
    bool load_texture(ID3D11ShaderResourceView** out_srv, ark::resource::image&);

    struct image
    {
        int width{};
        int height{};
        int size{};
        const unsigned char* data{};
    };

    struct native_texture
    {
        using handle_type = ID3D11ShaderResourceView*;

        explicit native_texture(image& image_) : image{ image_ }, handle{ nullptr }
        {
            //load_texture(&handle, image_);
        }

        image& image;
        handle_type handle;
    };


} // ui::resource

namespace ark
{
    struct resources
    {
        static resource::image icon;
        resource::native_texture ntx_icon{ icon };
        //#define ARK_RESOURCE_MEMBER
        //#include <ark/resource/embed.hpp>
        //#undef ARK_RESOURCE_MEMBER

        //std::vector<std::unique_ptr<raw_image>> raw_images_;

        void load();

    };
} // ark