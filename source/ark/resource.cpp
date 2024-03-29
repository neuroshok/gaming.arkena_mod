#include <ark/resource.hpp>

#include <ark/log.hpp>
#include <ark/ui/core.hpp>

#include <au/UnityEngine/Texture2D.hpp>
#include <il2cpp/api.hpp>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

namespace ark::resource
{
    void load()
    {
        /*ark_trace("Load resources");

        #define ARK_RESOURCE_LOADER
        #include <ark/resource/generated.hpp>
        #undef ARK_RESOURCE_LOADER
         */
    }

    UnityEngine::Texture2D* load_texture(resource::image& image)
    {
        auto tx_data = ark::resource::load_image(image);
        auto texture = il2cpp::new_object<UnityEngine::Texture2D>();
        texture->ctor7(image.width, image.height, UnityEngine::TextureFormat::RGBA32, false);

        ark_trace("Load texture {}x{} {}", texture->GetDataWidth(), texture->GetDataHeight(), (uintptr_t)texture);

        texture->LoadRawTextureData((intptr_t)tx_data, image.size);
        texture->Apply2();
        return texture;
    }

    unsigned char* load_image(ark::resource::image& image)
    {
        return stbi_load_from_memory(image.data, image.size, &image.width, &image.height, nullptr, 4);
    }

    bool load_texture(ID3D11ShaderResourceView** out_srv, ark::resource::image& image)
    {

        unsigned char* image_data = stbi_load_from_memory(image.data, image.size, &image.width, &image.height, nullptr, 4);

        if (image_data == nullptr) return false;

        // Create texture
        D3D11_TEXTURE2D_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Width = image.width;
        desc.Height = image.height;
        desc.MipLevels = 1;
        desc.ArraySize = 1;
        desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        desc.SampleDesc.Count = 1;
        desc.Usage = D3D11_USAGE_DEFAULT;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.CPUAccessFlags = 0;

        ID3D11Texture2D *pTexture = nullptr;
        D3D11_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = image_data;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        ui::core::device->CreateTexture2D(&desc, &subResource, &pTexture);
        return true;

        // Create texture view
        D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
        ZeroMemory(&srvDesc, sizeof(srvDesc));
        srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        srvDesc.Texture2D.MipLevels = desc.MipLevels;
        srvDesc.Texture2D.MostDetailedMip = 0;
        ui::core::device->CreateShaderResourceView(pTexture, &srvDesc, out_srv);
        pTexture->Release();

        return true;
    }
} // ark::resource