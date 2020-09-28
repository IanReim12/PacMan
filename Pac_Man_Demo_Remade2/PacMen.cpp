#include "PacMen.h"




void PacMen::verticalDirectionLoader(spriteDirection sprDir)
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

void PacMen::horizontalDirectionLoader(spriteDirection sprDir)
{

	if (qSpriteDirectionsHorizontal.empty() == false)
	{
		if (sprDir == -qSpriteDirectionsHorizontal.front())
		{

			std::queue <spriteDirection> qWiper; //clears the old directions q when an opposite command comes in
			std::swap(qSpriteDirectionsHorizontal, qWiper);
		}

	}
	if (qSpriteDirectionsHorizontal.size() < 2)
		qSpriteDirectionsHorizontal.push(sprDir);

}



void PacMen::pacMove(PacMen *pacmen)
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
					locationY = locationY + 1.f;
					pacmen->PacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;
				}
				break;


			case spriteDirection::down:

				if (hasBumbed == false)
				{
					locationY = locationY - 1.f;
					pacmen->PacManSprite.setPosition(locationX, locationY);
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
					locationX = locationX + 1.f;
					pacmen->PacManSprite.setPosition(locationX, locationY);
					hasBumbed = true;
					canMove = true;
				}

				break;

			case spriteDirection::right:

				if (hasBumbed == false)
				{
					locationX = locationX - 1.f;
					pacmen->PacManSprite.setPosition(locationX, locationY);
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
				locationY = locationY - 1.f;
				pacmen->PacManSprite.setPosition(locationX, locationY);
				break;

			case spriteDirection::down:
				locationY = locationY + 1.f;
				pacmen->PacManSprite.setPosition(locationX, locationY);
				break;




			}

		}
		else if (qSpriteDirectionsHorizontal.empty() == false && verticalMove == false)
		{
			switch (qSpriteDirectionsHorizontal.front())
			{
			case spriteDirection::left:
				locationX = locationX - 1.f;
				pacmen->PacManSprite.setPosition(locationX, locationY);
				break;

			case spriteDirection::right:
				locationX = locationX + 1.f;
				pacmen->PacManSprite.setPosition(locationX, locationY);
				break;
			}

		}
	}
}
