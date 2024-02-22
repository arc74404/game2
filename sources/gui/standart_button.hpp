#ifndef STANDART_BUTTON_HPP
#define STANDART_BUTTON_HPP

#include "gui/button.hpp"

class StandartButton : public Button
{
public:
    StandartButton();

    StandartButton(const sf::Vector2f& size);
private:
    void updateTexture() override;
};

#endif // STANDART_BUTTON_HPP