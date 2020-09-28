//This function is responsible for drawing all the sprites in the DrawableClasses folder.
//includes:
#include"SFML/Graphics.hpp"
#include "drawSprites.h"


//--------------------------------DrawableClasses memebers "#inlcudes" only-----------------------------------------------------------

#include "Maze.h"
#include "PacMen.h"
#include "Clyde.h"
#include "Inky.h"
#include "Blinky.h"
#include "Pinky.h"
//--------------------------------DrawableClasses Above-------------------------------------------------------------------------------






//--------------------------------Create Objects Below--------------------------------------------------------------------------------

Maze MazeObject;

Clyde ClydeObject;
Inky InkyObject;
Blinky BlinkyObject;
Pinky PinkyObject;
//--------------------------------Create Objects Above--------------------------------------------------------------------------------








//handle all draw logic within the drawSprites function
void drawSprites(sf::RenderWindow &window, PacMen *pacmen) 
{
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(100, 100));
	rectangle.setFillColor(sf::Color::Green);
	//window.draw(rectangle);




	window.draw(MazeObject.MazeSprite); 
	
	window.draw(pacmen->PacManSprite);

	window.draw(ClydeObject.ClydeSprite);

	window.draw(InkyObject.InkySprite);

	window.draw(BlinkyObject.BlinkySprite);

	window.draw(PinkyObject.PinkySprite);
}