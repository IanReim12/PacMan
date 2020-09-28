#pragma once
//This is the Maze or Labyrinth, not MAIN
//meant to act as the backrouund.
//includes:
#include "SFML/Graphics.hpp"


class Maze
{

public:
	sf::Texture MazeTexture;
	sf::Sprite MazeSprite;











	//constructor
	Maze() 
	{ 
		//sets texture and sprite
		MazeTexture.loadFromFile("pacManMaze.png"); 
		MazeSprite.setTexture(MazeTexture); 
		//initializes location
		MazeSprite.setPosition(.0f, 48.f);
	}

};
