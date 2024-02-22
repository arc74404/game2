#ifndef WORLD_HPP
#define WORLD_HPP

#include <SFML/Graphics.hpp>

class World
{
public:
    class wGui;

public:
    static World* getInstance();

private:
    World();
};

#endif // WORLD_HPP