#ifndef GAME_INPUTMANAGER_H
#define GAME_INPUTMANAGER_H

#include "SFML/Graphics.hpp"

class InputManager
{
public:
    static void DefaultInput(sf::Event event);
};

typedef struct Input
{
    static bool space;
} Input;

#endif
