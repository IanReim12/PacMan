#pragma once

//class for the blinky ghost
//includes:
#include "SFML/Graphics.hpp"
class Blinky
{
public:
	sf::Texture BlinkyTexture;
	sf::Sprite BlinkySprite;

	Blinky()
	{
		//sets texture and sprite
		BlinkyTexture.loadFromFile("blinkyResised.png");
		BlinkySprite.setTexture(BlinkyTexture);
		//initializes location
		BlinkySprite.setPosition(200.f, 300.25f);
		BlinkySprite.setOrigin(12.8f, 15.2f);
	}


};