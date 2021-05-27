#ifndef GAME_GLOBALS_H
#define GAME_GLOBALS_H

#include <iostream>

#include "SFML/Graphics.hpp"

namespace Config
{
    static const uint WIDTH = 800 * 2;
    static const uint HEIGHT = 450 * 2;
    static const std::string NAME = "Game";
}

namespace Color
{
    static const sf::Color BLACK {19, 19, 19, 255};
    static const sf::Color WHITE {236, 236, 236, 255};
    static const sf::Color RED {229, 78, 48, 255};
    static const sf::Color GREEN {117, 204, 40, 255};
    static const sf::Color BLUE {55, 107, 186, 255};
}

typedef struct GameTime
{
    float totalElapsedTime;
    float deltaTime;
} GameTime;

#endif
