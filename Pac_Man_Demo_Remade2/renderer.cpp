//this function is responsible for handling the loop responsible for drawing and refreshing.
#include "SFML/Graphics.hpp"
#include "drawSprites.h"
#include "renderer.h"
#include "PacMen.h"


void renderer(sf::RenderWindow &window, PacMen *pacmen)
{

	window.clear(sf::Color::Black);
	drawSprites(window, pacmen);
	window.display();


}
