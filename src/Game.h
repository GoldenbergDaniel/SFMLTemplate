#ifndef SFMLTEMPLATE_GAME_H
#define SFMLTEMPLATE_GAME_H

#include "Globals.h"

class Game
{
private:
    sf::RenderWindow *window;
    sf::Event event{};
    GameTime *time;
    void init();
    void updateEvents();
    void update();
    void draw();
    void deinit();
public:
    Game();
    ~Game();
    void run();
};

#endif
