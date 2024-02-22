#ifndef WORLD_GUI_HPP
#define WORLD_GUI_HPP

#include "world/world.hpp"

class Button;

class World::wGui
{
public:
    void handleEvents();

    static World::wGui* getInstance();

private:
    wGui();

    std::string getAppellationPressedButton();

    std::vector<ButtonPointer> m_button_list;
};

#endif // WORLD_GUI_HPP