#pragma once
#pragma once
//This Is the decleration for the engine class
//The engine class handles creating the RenderWindow, and handling events within said window, while renderwindow is running.
//inlcudes
#include "GameEngine.h"
#include "SFML/Graphics.hpp"
#include "PacMen.h"


class GameEngine
{
public:
	static sf::RenderWindow gameWindow;

	//funcs
	static bool engineUp(sf::RenderWindow &window);
	static void eventHandler(sf::RenderWindow &window, PacMen *pacmen);
	static void createRenderWindow(sf::RenderWindow &window);

};

