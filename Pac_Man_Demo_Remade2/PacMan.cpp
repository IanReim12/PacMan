#include "PacMan.h"
#include "direction.h"
#include "GridSquare.h"
#include <iostream>
















void PacMan::verticalDirectionLoader(spriteDirection sprDir)
{
	if (qSpriteDirectionsVertical.empty() == false)
	{
		if (sprDir == -qSpriteDirectionsVertical.front())
		{

			std::queue <spriteDirection> qWiper; //clears the old directions q when an opposite command comes in
			std::swap(qSpriteDirectionsVertical, qWiper);
		}

	}
	if (qSpriteDirectionsVertical.size() < 2)
		qSpriteDirectionsVertical.push(sprDir);

}

void PacMan::horizontalDirectionLoader(spriteDirection sprDir)
{

	if (qSpriteDirectionsHorizontal.empty() == false)
	{
		if (sprDir == -qSpriteDirectionsHorizontal.front())
		{

			std::queue <spriteDirection> qWiper; //clears the old directions q when an opposite command comes in
			std::swap(qSpriteDirectionsHorizontal , qWiper);
		}

	}
	if (qSpriteDirectionsHorizontal.size() < 2)
		qSpriteDirectionsHorizontal.push(sprDir);

}



void PacMan::pacMove()
{
	bool hasBumbed = false;

	if (canMove == false) //forces pacman one tile away from the direction its going when it shouldent be alowed to move
	{
		if (qSpriteDirectionsVertical.empty() == false && horizontalMove == false)
		{

			switch (qSpriteDirectionsVertical.front())

			{
			case spriteDirection::up:

				if (hasBumbed == false)
				{
					locationY = locationY + 1.5f;
					pacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;
				}
				break;
				
				
			case spriteDirection::down:

				if (hasBumbed == false)
				{ 
					locationY = locationY - 1.5f;
					pacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;
				}
				break;
			}


		}
		else if ((qSpriteDirectionsHorizontal.empty() == false && verticalMove == false))
		{
			switch (qSpriteDirectionsHorizontal.front())
			{
			case spriteDirection::left:

				if (hasBumbed == false)
				{
					locationX = locationX + 1.5f;
					pacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;
				}

					break;

			case spriteDirection::right:

				if (hasBumbed == false)
				{
					locationX = locationX - 1.5f;
					pacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;

				}

					break;
			}


		}

	}














	else if (canMove == true) {


		if (qSpriteDirectionsVertical.empty() == false && horizontalMove == false)
		{
			switch (qSpriteDirectionsVertical.front())
			{

			case spriteDirection::up:
				locationY = locationY - 3.0f;
				pacManSprite.setPosition(locationX, locationY);
				break;

			case spriteDirection::down:
				locationY = locationY + 3.0f;
				pacManSprite.setPosition(locationX, locationY);
				break;




			}

		}
		else if (qSpriteDirectionsHorizontal.empty() == false && verticalMove == false)
		{
			switch (qSpriteDirectionsHorizontal.front())
			{
			case spriteDirection::left:
				locationX = locationX - 3.0f;
				pacManSprite.setPosition(locationX, locationY);
				break;

			case spriteDirection::right:
				locationX = locationX + 3.0f;
				pacManSprite.setPosition(locationX, locationY);
				break;
			}

		}
	}
}





//std::queue<spriteDirection> PacMan::directionGetter()
//{
	//return qSpriteDirections;
//}




void PacMan::pacInit(sf::RenderWindow &window)
{
	//re size images of ghosts to all be the same
	pacMan.loadFromFile("pacMan.png");
	pacManSprite.setTexture(pacMan);
}

void PacMan::pacScaler()
{
	scaleX = .08;
	scaleY = .08;
	pacManSprite.setScale(scaleX, scaleY);
}