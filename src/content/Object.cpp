#include "../Globals.h"

#include "Object.h"

Object::Object(sf::Vector2f position, sf::Color color, float size)
{
    this->position = position;
    this->color = color;
    this->size = size;

    this->init();
}

Object::~Object()
{
    this->deinit();
}

void Object::init()
{
    shape.setPosition(position);
    shape.setSize({size, size});
    shape.setFillColor(color);
}

void Object::update(GameTime *gameTime)
{

}

void Object::draw(sf::RenderWindow *window)
{
}

void Object::deinit()
{
    delete &shape;
}
