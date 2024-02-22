#include "basic_local_gui.hpp"

#include "button.hpp"
#include "gui.hpp"

BasicLocalGui::BasicLocalGui()
{
    // sf::Vector2f window_size = Gui::getInstance()->getWindowSize();
}

std::string
BasicLocalGui::getAppellationPressedButton()
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