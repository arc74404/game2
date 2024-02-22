#include "gui.hpp"

Gui::Gui()
{
    sf::Vector2f window_size = {900, 550};

    m_window.create(sf::VideoMode(window_size.x, window_size.y), "Game2");

    m_window.setFramerateLimit(60);
}

Gui*
Gui::getInstance()
{
    static Gui inst;
    return &inst;
}

void
Gui::handleEvents()
{

    Player::pGui::getInstance()->handleEvents();
    // действия персонажа самого на себя

    // World::wGui::getInstance()->handleEvents(); // действия персонажа на объекты
                                               // на карту

    // Settings::getInstance()->handleEvents();//действия игрока на кнопки
}

sf::Vector2f
Gui::getMousePosition()
{
    sf::Vector2i m = sf::Mouse::getPosition(m_window);

    return sf::Vector2f(float(m.x), float(m.y));
}