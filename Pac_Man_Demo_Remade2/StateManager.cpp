#include "StateManager.h"



void StateManager::keyPressed(int code, PacMan *pacman)
{
	switch (code)
	{
	
	case sf::Keyboard::Up:
		pacman->verticalDirectionLoader(spriteDirection::up);
		pacman->verticalMove = true;
		pacman->horizontalMove = false;
		pacman->canMove = true;
		break;

	case sf::Keyboard::Down:
		pacman->verticalDirectionLoader(spriteDirection::down);
		pacman->verticalMove = true;
		pacman->horizontalMove = false;
		pacman->canMove = true;
		break;

	case sf::Keyboard::Left:
		pacman->horizontalDirectionLoader(spriteDirection::left);
		pacman->verticalMove = false;
		pacman->horizontalMove = true;
		pacman->canMove = true;
		break;

	case sf::Keyboard::Right:
		pacman->horizontalDirectionLoader(spriteDirection::right);
		pacman->verticalMove = false;
		pacman->horizontalMove = true;
		pacman->canMove = true;
		break;

	}
}