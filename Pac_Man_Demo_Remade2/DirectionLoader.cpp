#include "DirectionLoader.h"



void DirectionLoader::keyPressed(int code, PacMen *pacmen)
{
	switch (code)
	{

	case sf::Keyboard::Up:
		pacmen->verticalDirectionLoader(spriteDirection::up);
		pacmen->verticalMove = true;
		pacmen->horizontalMove = false;
		pacmen->canMove = true;
		break;

	case sf::Keyboard::Down:
		pacmen->verticalDirectionLoader(spriteDirection::down);
		pacmen->verticalMove = true;
		pacmen->horizontalMove = false;
		pacmen->canMove = true;
		break;

	case sf::Keyboard::Left:
		pacmen->horizontalDirectionLoader(spriteDirection::left);
		pacmen->verticalMove = false;
		pacmen->horizontalMove = true;
		pacmen->canMove = true;
		break;

	case sf::Keyboard::Right:
		pacmen->horizontalDirectionLoader(spriteDirection::right);
		pacmen->verticalMove = false;
		pacmen->horizontalMove = true;
		pacmen->canMove = true;
		break;

	}
}