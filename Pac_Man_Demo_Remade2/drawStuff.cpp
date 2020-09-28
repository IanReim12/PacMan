
#include "SFML/Graphics.hpp"
#include "input.h"
#include "Engine.h"
#include "PacMan.h"
#include "Collisions.h"
#include  <iostream>
#include <iostream>

void Engine::drawStuff(sf::RenderWindow &window, PacMan *pacman)
{
	sf::RectangleShape gameBackround; //get a blank backround set it black
	gameBackround.setSize(sf::Vector2f(1000, 1000));
	gameBackround.setFillColor(sf::Color::Green); //change to black when done with layout
	
	window.draw(gameBackround);



	sf::Texture pacMaze; //for the maze
	pacMaze.loadFromFile("pacManMaze.png");
	sf::Sprite pacMazeSprite;
	pacMazeSprite.setTexture(pacMaze);
	pacMazeSprite.setPosition(.0f, 7.f);
	window.draw(pacMazeSprite);


	
	sf::Texture blinky; //re size images of ghosts to all be the same
	blinky.loadFromFile("blinky.png");
	sf::Sprite blinkySprite;
	blinkySprite.setTexture(blinky);
	blinkySprite.setPosition(200.f, 270.f);
	window.draw(blinkySprite);



	sf::Texture pinky;//must resize
	pinky.loadFromFile("pinky.png");
	sf::Sprite pinkySprite;
	pinkySprite.setTexture(pinky);
	pinkySprite.setPosition(220.f, 280.f);
	pinkySprite.setScale(0.9f, 0.9f);
	window.draw(pinkySprite);
	


	sf::Texture inky;//must resize
	inky.loadFromFile("inky.png");
	sf::Sprite inkySprite;
	inkySprite.setTexture(inky);
	inkySprite.setScale(0.14f, 0.14f);
	inkySprite.setPosition(240.f, 289.f);
	window.draw(inkySprite);



	sf::Texture clyde;
	clyde.loadFromFile("clyde.png");
	sf::Sprite clydeSprite;
	clydeSprite.setTexture(clyde);
	clydeSprite.setScale(0.02f, 0.02f);
	clydeSprite.setPosition(250.f,290.f);
	window.draw(clydeSprite);

	
	
	
	



	sf::Texture square;
	square.loadFromFile("testSquare.png");
	sf::Sprite squareSprite;
	squareSprite.setTexture(square);
	squareSprite.setPosition(16.f, 32.f);
	window.draw(squareSprite);
#pragma region Grid
	





	const int rows = 28; //width
	const int collums = 36; //height


	
	
	sf::RectangleShape grid1;
	grid1.setFillColor(sf::Color::Transparent);
	grid1.setOutlineColor(sf::Color::White);
	grid1.setOutlineThickness(.5f);
	grid1.setSize(sf::Vector2f(16, 16));
	sf::RectangleShape gridArray[rows][collums]{ grid1 };
	int positionx = -16;
	int positiony = 0;

	for (int i = 0; i < 28; i++)
	{
		positionx = positionx + 16;
		positiony = 0;
		for (int j = 0; j < 36; j++)
		{
			
			
			//squareSprite.setPosition(positionx, positiony);
			//window.draw(squareSprite);
			positiony = positiony + 16;
			if (pacman->pacManSprite.getGlobalBounds().intersects(squareSprite.getGlobalBounds()))
			{

				pacman->canMove = false;
				std::cout << "UGHGHGHGHG" << std::endl;
			}
		}
	}
	window.draw(pacman->pacManSprite);
	
	

	window.draw(pacman->pacManSprite);

	







	
}

