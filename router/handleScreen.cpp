#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "handleScreen.hpp"
#include "../maps/test/test.hpp"
void router::screenHandler() {
    router::screen.create(sf::VideoMode(968,600),"handler");
    router::screen.setFramerateLimit(60);
    test Test;
    Test.render(router::screen);
}
void router::screenHandler(int num, sf::RenderWindow& screen) {}