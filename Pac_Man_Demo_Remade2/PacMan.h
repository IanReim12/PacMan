#pragma once
#include <queue>
#include "direction.h"
#include "SFML/Graphics.hpp"
#include "GridSquare.h"
class PacMan
{

public:
	
	sf::Texture pacMan; 
	sf::Sprite pacManSprite;
	







	PacMan()
	{
		pacMan.loadFromFile("pacMan.png");
		pacManSprite.setTexture(pacMan);
	}

		
	std::queue<spriteDirection> qSpriteDirectionsVertical;
	std::queue<spriteDirection> qSpriteDirectionsHorizontal;
	//vals
	int dotsEaten = 0;
	int powerPelletsEaten = 0;

	float locationX;
	float locationY;
	
	float scaleX;
	float scaleY;

	bool powerPeletActive = false;
	bool pacAlive = true;
	bool canMove = true;
	bool horizontalMove = false;
	bool verticalMove = false;

	

	//funcs
	void pacScaler();
	void pacInit(sf::RenderWindow &window);
	void pacMove();
	void verticalDirectionLoader(spriteDirection sprDir);
	void horizontalDirectionLoader(spriteDirection sprDir);
	std::queue<spriteDirection> directionGetter();

	bool pacIsDead();
	void dotIncrement();
	void powerSetActive();
};

