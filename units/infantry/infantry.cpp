#include <SFML/Graphics.hpp>
#include "infantry.hpp"
#include <iostream>
#include <math.h>
// class constructor
infantry::infantry(float life, float defance, float attack, int speed, int unitNum, sf::Vector2f pos) : soldier(life, defance, attack, speed, unitNum)
{
    infantry::initPosition = pos;
    infantry::target = pos;
    infantry::rotation = 0;
    infantry::create_Shape();
};
// create Unit formation
void infantry::create_Shape()
{
    infantry::shape.setSize(sf::Vector2f(soldier::get_life(), get_unitNum()));
    infantry::shape.setFillColor(sf::Color(150, 50, 250));
    sf::Rect<float> size = infantry::shape.getGlobalBounds();
    infantry::shape.setOrigin(sf::Vector2f(size.width / 2 , size.height / 2));
    infantry::shape.setPosition(infantry::initPosition);
    infantry::shape.setRotation(infantry::rotation);
}
// return Unit formation
sf::RectangleShape infantry::get_Shape()
{
    return infantry::shape;
}
// mouse event and rotate toward the mouse direction
void infantry::set_direction(sf::Vector2f mouseP)
{
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
       infantry::target = mouseP;
       float angle = infantry::calculate_angle(infantry::shape.getPosition().x,infantry::shape.getPosition().y,mouseP.x,mouseP.y);
       infantry::shape.setRotation(angle);
    }
}
// calculate the mouse angle relative to shape position
float infantry::calculate_angle(float x1 ,float y1,float x2,float y2) {
    sf::Vector2f up(0, 1);
    sf::Vector2f p0(x1, y1);
    sf::Vector2f p1(x2, y2);
    sf::Vector2f q = p1 - p0;
     
    float q_length = sqrtf(q.x * q.x + q.y * q.y);
 
    q.x /= q_length;
    q.y /= q_length;
 
    float scalar_product = q.y;
 
    float angle = acos(scalar_product) * 180.0f / 3.1415f;
 
    if (x2 - x1 < 0.0f)
        return angle;
    else
        return -angle;
}
// move the shape in direction of the mouse
void infantry::unit_mouvement(sf::RenderWindow& window) {
    if(infantry::shape.getPosition() != infantry::target) {
       sf::Vector2f totalMouve = infantry::target - shape.getPosition();
       infantry::shape.move(totalMouve * 0.1f);
    }
}

