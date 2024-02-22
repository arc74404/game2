#ifndef TEXTURE_STORAGE_HPP
#define TEXTURE_STORAGE_HPP

#include <SFML/Graphics/Texture.hpp>

#include <map>

class TextureStorage
{
public:
    enum class ButtonTextureStatus
    {
        CHOOSE  = 0,
        DEFAULT = 1,
        PRESSED = 2
    };

    static TextureStorage* getInstance();

    std::map<ButtonTextureStatus, sf::Texture> standartButtonTextureMap;

    // std::map<Status, sf::Texture> standartButtonTextureMap;

private:
    TextureStorage();
};

#endif // TEXTURE_STORAGE_HPP