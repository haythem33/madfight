#include <SFML/Graphics.hpp>
#include "../soldier/soldier.hpp"

class infantry : public soldier {
   private:
   sf::RectangleShape shape;
   sf::Vector2f initPosition;
   float rotation;
   sf::Vector2f target;
   bool focus;
   public :
   // constructor
   infantry(float life,float defance,float attack,int speed,int unitNum,sf::Vector2f pos);
   //getter and setter for unit shape
   void create_Shape();
   sf::RectangleShape get_Shape();
   // unit mouvement
   void set_direction(sf::Vector2f mouseP);
   float calculate_angle(float x1 ,float y1, float x2, float y2);
   void unit_mouvement(sf::RenderWindow& window);
   void set_rotation(sf::Vector2f mouseP);
   void unit_rotation();
};