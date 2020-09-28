#pragma once
//class for the clyde ghost
//includes:
#include "SFML/Graphics.hpp"
class Clyde
{
public:
	sf::Texture ClydeTexture;
	sf::Sprite ClydeSprite;

	Clyde()
	{
		//sets texture and sprite
		ClydeTexture.loadFromFile("ClydeResized.png");
		ClydeSprite.setTexture(ClydeTexture);
		//initializes location
		ClydeSprite.setPosition(260.f, 300.25f);
		ClydeSprite.setOrigin(12.8f, 15.2f);
	}


};