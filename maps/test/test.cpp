#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "test.hpp"
#include "../../units/infantry/infantry.hpp"

void test::loadBackGroud(sf::RenderWindow& window) {
    if(window.isOpen()) {
      sf::Texture texture;
      if(!texture.loadFromFile("assets/level1.jpg")) {
         EXIT_FAILURE;
      } else {
         sf::Sprite img(texture);
         img.scale(0.7, 0.7);
         window.draw(img); 
      }
    } else {
        EXIT_FAILURE;
    }
}

void test::render(sf::RenderWindow& window) {
    window.setTitle("TEST SCREEN");
    infantry sol(200,50,70,4,50,sf::Vector2f(500,500));
    while(window.isOpen()) {
        sol.set_direction(sf::Vector2f(sf::Mouse::getPosition(window).x,sf::Mouse::getPosition(window).y));
        sol.unit_mouvement(window);
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        } 
        window.clear();
        loadBackGroud(window);
        window.draw(sol.get_Shape());
        window.draw(sol.getLineDirection());
        window.display();
    }
}