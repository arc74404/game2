#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>


class Player
{
public:
    class pGui;

public:
    static Player* getInstance();

private:
    Player();
};

#endif // PLAYER_HPP