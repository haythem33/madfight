#include <SFML/Graphics.hpp>
#include <stdio.h>
class router {
    private :
     sf::RenderWindow screen;
     int screenNum;
    public :
    void screenHandler();
    void screenHandler(int num,sf::RenderWindow& screen);
};