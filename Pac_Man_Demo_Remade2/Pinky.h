#pragma once
#pragma once

//class for the blinky ghost
//includes:
#include "SFML/Graphics.hpp"
class Pinky
{
public:
	sf::Texture PinkyTexture;
	sf::Sprite PinkySprite;

	Pinky()
	{
		//sets texture and sprite
		PinkyTexture.loadFromFile("pinky.jpg");
		PinkySprite.setTexture(PinkyTexture);
		//initializes location
		PinkySprite.setPosition(270.f, 300.25f);
		PinkySprite.setOrigin(12.8f, 15.2f);
		PinkySprite.setScale(.03f, .03f);
	}


};