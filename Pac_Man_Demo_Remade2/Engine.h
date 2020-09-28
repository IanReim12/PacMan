#pragma once
#include "SFML/Graphics.hpp"
#include "PacMan.h"
class Engine
{
private:

	static sf::RenderWindow gameWindow;

public:

	static void initializer();
	static void renderer(PacMan *pacman);
	static void eventHandler(PacMan *pacman);
	static void drawStuff(sf::RenderWindow &window, PacMan *pacman);
	static bool engineUp();



};

