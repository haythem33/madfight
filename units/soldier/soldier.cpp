#include "soldier.hpp"
#include <math.h>
//constructor
soldier::soldier(float life,float defance,float attack,int speed,int unitNum) {
   soldier::life = life;
   soldier::defance = defance;
   soldier::attack = attack;
   soldier::speed = speed;
   soldier::unitNum = unitNum;
}
// getter and setter for soldier life
void soldier::set_life(float life) {
    soldier::life = life;
};
float soldier::get_life() {
    return soldier::life;
};
// getter and setter for soldier attack
void soldier::set_attack(float attack) {
    soldier::attack = attack;
}
float soldier::get_attack() {
    return soldier::attack;
}
// getter and setter for soldier defance
void soldier::set_defance(float defance) {
    soldier::defance = defance;
}
float soldier::get_defance() {
    return soldier::defance;
}
// getter and setter for soldier speed
void soldier::set_speed(int speed) {
    soldier::speed = speed;
}
int soldier::get_speed() {
    return soldier::speed;
}
// getter and setter for soldier unit number
void soldier::set_unitNum(int num) {
    soldier::unitNum = num;
}
int soldier::get_unitNum() {
    return soldier::unitNum;
}
//create the line Direction for a unit
void soldier::createLineDirection(sf::Vector2f start ,sf::Vector2f target) {
    // calculate angle
    float dx = target.x - start.x;
    float dy = target.y - start.y;
    const float pi = 3.1415f;
    float angle = (atan2(dy,dx)) * 180.0f / pi;
    soldier::line_direction.setRotation(angle);
    // normalizing width with distance
    float width = sqrtf(dx * dx + dy * dy);
    soldier::line_direction.setSize(sf::Vector2f(width,20));
    soldier::line_direction.setPosition(start);
    soldier::line_direction.setOrigin(0,0);
    soldier::line_direction.setFillColor(sf::Color(236, 157, 88));
    soldier::line_direction.setOutlineColor(sf::Color(217,106,9));
    soldier::line_direction.setOutlineThickness(2);

}
sf::RectangleShape soldier::getLineDirection() {
    return soldier::line_direction;
}
