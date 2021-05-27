#include <iostream>

#include "Globals.h"

#include "managers/InputManager.h"
#include "content/Object.h"

#include "Game.h"

Game::Game()
{
    this->window = new sf::RenderWindow(sf::VideoMode(Config::WIDTH, Config::HEIGHT), Config::NAME);
    this->event = sf::Event();
    this->time = new GameTime();

    this->init();
}

Game::~Game()
{
    this->deinit();

    delete this->window;
    delete this->time;
}

void Game::updateEvents()
{
    while (this->window->pollEvent(this->event))
    {
        if (this->event.type == sf::Event::Closed)
        {
            this->window->close();
        }
        else if (this->event.type == sf::Event::KeyPressed)
        {
            if (this->event.key.code == sf::Keyboard::Escape)
            {
                this->window->close();
            }
        }

        InputManager::DefaultInput(event);
    }
}

void Game::init()
{

}

void Game::update()
{

}

void Game::draw()
{
    this->window->clear(Color::BLACK);

    this->window->display();
}

void Game::deinit()
{

}

void Game::run()
{
    float totalTimeSinceUpdate;
    float previousTimeElapsed;
    float totalTimeElapsed;
    float deltaTime;

    while (this->window->isOpen())
    {
        clock_t elapsedTime = clock();

        totalTimeElapsed = (float) elapsedTime / CLOCKS_PER_SEC;
        deltaTime = totalTimeElapsed - previousTimeElapsed;
        previousTimeElapsed = totalTimeElapsed;

        totalTimeSinceUpdate += deltaTime;

        if (totalTimeSinceUpdate >= (float) 1/60)
        {
            this->time->deltaTime = totalTimeSinceUpdate;
            this->time->totalElapsedTime = (float) elapsedTime / CLOCKS_PER_SEC;
            totalTimeSinceUpdate = 0;

            this->updateEvents();
            this->update();
            this->draw();
        }
    }
}
