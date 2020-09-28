#pragma once
#include "SFML/Graphics.hpp"
class Tile
{
public:
	sf::RectangleShape grid1;
	int positionx = -16;
	int positiony = 0;
	int tileVal;
	Tile()
	{
		grid1.setFillColor(sf::Color::Transparent);
		grid1.setOutlineColor(sf::Color::White);
		grid1.setOutlineThickness(.5f);
		grid1.setSize(sf::Vector2f(16, 16));
	}
};

