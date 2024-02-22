#include "player_pgui.hpp"

#include "gui/button.hpp"

#include "gui/gui.hpp"

Player::pGui::pGui()
{
    sf::Vector2f window_size = Gui::getInstance()->getWindowSize();
}

std::string
Player::pGui::getAppellationPressedButton()
{
    for (int i = 0; i < m_button_list.size(); ++i)
    {
        ButtonPointer button_ptr = m_button_list[i];
        button_ptr->update();

        if (button_ptr->getStatus() == Button::Status::PRESSED)
        {
            return button_ptr->getAppellation();
        }
    }
    return "none";
}

void
Player::pGui::handleEvents()
{
    std::string appellation_pressed_button = getAppellationPressedButton();

    if (appellation_pressed_button == "none")
    {
    }
}

Player::pGui*
Player::pGui::getInstance()
{
    static Player::pGui pGui;
    return &pGui;
}