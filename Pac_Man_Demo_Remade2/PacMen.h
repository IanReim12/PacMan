#pragma once
//Class for the Drawable PacMan player sprite, called PacMen because no choice
//includes:
#include "directions.h"
#include "SFML/Graphics.hpp"
#include <queue>
class PacMen
{
public:
	sf::Texture PacManTexture;
	sf::Sprite PacManSprite;
	




	std::queue<spriteDirection> qSpriteDirectionsVertical;
	std::queue<spriteDirection> qSpriteDirectionsHorizontal;

	float locationX;
	float locationY;

	bool canMove = true;
	bool horizontalMove = false;
	bool verticalMove = false;

	void pacMove(PacMen *pacmen);

	void verticalDirectionLoader(spriteDirection sprDir);
	void horizontalDirectionLoader(spriteDirection sprDir);

	PacMen()
	{
		//sets texture and sprite
		PacManTexture.loadFromFile("pacManResised.png");
		PacManSprite.setTexture(PacManTexture);
		//initializes location
		locationX = 244.f;
		locationY = 457.25f;

		PacManSprite.setPosition(244.f, 457.25f);
		PacManSprite.setOrigin(12.8f, 15.2f);
	}


};