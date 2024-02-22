#ifndef BASIC_GUI_HPP
#define BASIC_GUI_HPP

#include <SFML/Graphics.hpp>

class Button;

// typedef std::shared_ptr<Button> ButtonPointer;

class BasicLocalGui
{
public:
    virtual void handleEvents() = 0;

    BasicLocalGui();

private:
    std::string getAppellationPressedButton();

    std::vector<ButtonPointer> m_button_list;
};

#endif // BASIC_GUI_HPP