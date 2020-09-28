#include "Engine.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Draw.h"
#include "PacMan.h"
#include "StateManager.h"

sf::RenderWindow Engine::gameWindow;

void Engine::initializer()
{
	gameWindow.create(sf::VideoMode(447, 576), "Pac_Man");
}


void Engine::renderer(PacMan *pacman) //loops and refreshes screen every frame
{
	gameWindow.clear(sf::Color::Black);
	drawStuff(gameWindow, pacman);
	
	gameWindow.display();
}


void Engine::eventHandler(PacMan *pacman) //process events occuring within the RenderWindow object gameWindow
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
			StateManager::keyPressed(event.key.code, pacman);
			break;
		}

	}
}


bool Engine::engineUp() //resposible for loop
{

	return gameWindow.isOpen();

}