#include <SFML/Graphics.hpp>

class soldier {
    private: 
    float life;
    float defance;
    float attack;
    int speed;
    int unitNum;
    sf::RectangleShape line_direction;
    public :
    // constructor
    soldier(float life,float defance,float attack,int speed,int unitNum);
    // getter and setter for soldier life
    void set_life(float life);
    float get_life();
    // getter and setter for soldier defance
    void set_defance(float defance);
    float get_defance();
    // getter and setter for soldier attack
    void set_attack(float attack);
    float get_attack();
    // getter and setter for soldier speed
    void set_speed(int speed);
    int get_speed();
    // getter and setter for soldier unit number
    void set_unitNum(int num);
    int get_unitNum();
    // create the line Direction for a unit
    void createLineDirection(sf::Vector2f start,sf::Vector2f target);
    sf::RectangleShape getLineDirection();
};