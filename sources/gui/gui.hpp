#ifndef GUI_HPP
#define GUI_HPP

#include "player/player_pgui.hpp"
#include "world/world_wgui.hpp"

class Gui
{
public:
    static Gui* getInstance();

    void handleEvents();

    sf::Vector2f getMousePosition();

    sf::Vector2f getWindowSize();

private:
    Gui();

    sf::RenderWindow m_window;
};

#endif // GUI_HPP