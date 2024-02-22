#include "player.hpp"

Player::Player()
{
}

Player*
Player::getInstance()
{
    static Player inst;
    return &inst;
}