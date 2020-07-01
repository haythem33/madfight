#include "soldier.hpp"

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
