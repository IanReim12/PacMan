
#pragma once
//class for the clyde ghost
//includes:
#include "SFML/Graphics.hpp"
class Inky
{
public:
	sf::Texture InkyTexture;
	sf::Sprite InkySprite;

	Inky()
	{
		//sets texture and sprite
		InkyTexture.loadFromFile("inkyResised.png");
		InkySprite.setTexture(InkyTexture);
		//initializes location
		InkySprite.setPosition(220.f, 300.25f);
		InkySprite.setOrigin(12.8f, 15.2f);
	}


};