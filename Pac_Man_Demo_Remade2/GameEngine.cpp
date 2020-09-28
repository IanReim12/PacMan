//definitions for the class functions within engine.h
//includes
#include "GameEngine.h"
#include "SFML/Graphics.hpp"
#include "DirectionLoader.h"
#include "PacMen.h"
sf::RenderWindow GameEngine::gameWindow;


bool GameEngine::engineUp(sf::RenderWindow &window)
{

	return window.isOpen();

}


void GameEngine::createRenderWindow(sf::RenderWindow &window)
{

	window.create(sf::VideoMode(488, 619), "PacMan Game");

}


void GameEngine::eventHandler(sf::RenderWindow &window, PacMen *pacmen)
{

	sf::Event event;
	while (gameWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			gameWindow.close();
			break;

		case sf::Event::KeyPressed:
			DirectionLoader::keyPressed(event.key.code, pacmen);
			break;
		}

	}



}