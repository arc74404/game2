#ifndef PLAYER_GUI_HPP
#define PLAYER_GUI_HPP

#include "gui/basic_local_gui.hpp"

#include "player.hpp"

class Button;

typedef std::shared_ptr<Button> ButtonPointer;

class Player::pGui : public BasicLocalGui
{
public:
    void handleEvents() override;

    static Player::pGui* getInstance();

private:
    pGui();

    sf::RectangleShape m_shape;
};

#endif // PLAYER_GUI_HPP