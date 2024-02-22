#include "button.hpp"

Button::Button() : Button(sf::Vector2f(0, 0))
{
}

Button::Button(const sf::Vector2f& size)
    : m_shape_back(size), m_shape_title(size), m_status(Status::DEFAULT)
{
}

void
Button::setPosition(const sf::Vector2f& position)
{
    m_shape_back.setPosition(position);

    m_shape_title.setPosition(position);
}

void
Button::setAppellation(const std::string& appellation)
{
    m_appellation = appellation;
}

void
Button::update()
{
    sf::Vector2f shape_position = m_shape_back.getPosition();

    sf::Vector2f mouse_position = Gui::getInstance()->getMousePosition();

    // if (m_status == Status::RELEASED)
    // {
    //     m_status =
    // }

    // if (mouse_position.x > shape_position.x &&
    //     mouse_position.x < shape_position.x + m_shape_back.getSize().x &&
    //     mouse_position.y > shape_position.y &&
    //     mouse_position.y < shape_position.y + m_shape_back.getSize().y)
    // {
    //     if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    //     {
    //         if (m_status == Status::SELECTED)
    //         {
    //             // KEPT
    //         }
    //         else if (m_status == Status::KEPT)
    //         {
    //             // HOLDING;
    //         }
    //     }
    //     else
    //     {
    //         if (m_status == Status::KEPT || m_status == Status::HOLDING)
    //         {
    //             // RELEASED
    //         }
    //         else if (m_status == Status::DEFAULT)
    //         {
    //             // SELECTED
    //         }
    //     }
    // }
    // else
    // {
    //     // STANDART
    // }
}

void
Button::setSize(const sf::Vector2f& size)
{
    m_shape_back.setSize(size);
}

Button::Status
Button::getStatus()
{
    return m_status;
}

// void
// Button::setTitle(const std::string& str)
// {
//     title.setString(str);
//     title.setCharacterSize(m_shape_back.getSize().y * 0.3);

//     title.setColor(sf::Color::Black);

//     title.setFont(DataBase::deafault_font);

//     setPosition(m_shape_back.getPosition());
// }

Button&
Button::operator=(const Button& other)
{
    this->m_shape_back = other.m_shape_back;

    // this->title = other.title;

    return *this;
}

void
Button::draw(sf::RenderWindow& window)
{
    window.draw(m_shape_back);

    // window.draw(title);
}

sf::Vector2f
Button::getSize()
{
    return m_shape_back.getSize();
}

sf::Vector2f
Button::getPosition()
{
    return m_shape_back.getPosition();
}

std::string
Button::getAppellation()
{
    return m_appellation;
}
