#include "InputManager.h"

bool Input::space;

void InputManager::DefaultInput(sf::Event event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        switch (event.key.code)
        {
            case sf::Keyboard::Space:
                Input::space = true;
                break;
            default:
                break;
        }
    }

    if (event.type == sf::Event::KeyReleased)
    {
        switch (event.key.code)
        {
            case sf::Keyboard::Space:
                Input::space = false;
                break;
            default:
                break;
        }
    }
}
