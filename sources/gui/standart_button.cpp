#include "standart_button.hpp"

StandartButton::StandartButton()
{
}

StandartButton::StandartButton(const sf::Vector2f& size) : Button(size)
{
    m_type = Type::STANDART_BUTTON;
    updateTexture();
}

void
StandartButton::updateTexture()
{
    m_shape_back.setTexture(
        &TextureStorage::getInstance()->standartButtonTextureMap
             [TextureStorage::ButtonTextureStatus::DEFAULT]);
}