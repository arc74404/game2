#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML/Graphics.hpp>

#include "gui/gui.hpp"

#include "texture_storage.hpp"

class Button
{
protected:
    enum class Status;
    enum class Type;

    sf::RectangleShape m_shape_back;
    sf::RectangleShape m_shape_title;

    Status m_status;

    Type m_type;

    std::string m_appellation;

    virtual void updateTexture() = 0;

public:
    enum class Status
    {
        DEFAULT = 0,
        PRESSED = 1,
        CHOOSE  = 2
    };
    enum class Type
    {
        STANDART_BUTTON = 0
    };

    Button();

    Button(const sf::Vector2f& size);

    void update();

    void setSize(const sf::Vector2f& size);

    void setPosition(const sf::Vector2f& position);

    void draw(sf::RenderWindow& window);

    void setAppellation(const std::string& appellation);

    Button& operator=(const Button& other);

    Status getStatus();

    sf::Vector2f getSize();

    sf::Vector2f getPosition();

    std::string getAppellation();
};

#endif // BUTTON_HPP