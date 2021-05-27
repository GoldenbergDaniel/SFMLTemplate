#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class Object
{
private:
    sf::RectangleShape shape;
    sf::Vector2f position;
    sf::Color color;
    float size;
public:
    Object(sf::Vector2f position, sf::Color color, float height);
    ~Object();
    void init();
    void update(GameTime *gameTime);
    void draw(sf::RenderWindow *window);
    void deinit();
};

#endif
