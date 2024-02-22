#include "texture_storage.hpp"

TextureStorage::TextureStorage()
{
    std::string folder_path = "C:/Users/arsbo/source/repos/game2/resources/";

    sf::Texture texture;
    texture.loadFromFile(folder_path + "buttons_texture/default/normal.png");

    standartButtonTextureMap.insert(
        std::make_pair(ButtonTextureStatus::DEFAULT, texture));

    texture.loadFromFile(folder_path + "buttons_texture/choose/normal.png");

    standartButtonTextureMap.insert(
        std::make_pair(ButtonTextureStatus::CHOOSE, texture));

    texture.loadFromFile(folder_path + "buttons_texture/pressed/normal.png");

    standartButtonTextureMap.insert(
        std::make_pair(ButtonTextureStatus::PRESSED, texture));

    //////////////////////////////////////////////////////////////////////////
}

TextureStorage*
TextureStorage::getInstance()
{
    static TextureStorage texture_storage;
    return &texture_storage;
}