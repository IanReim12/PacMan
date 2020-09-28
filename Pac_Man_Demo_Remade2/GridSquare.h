#pragma once
#include <vector>
#include "PacMan.h"
#include "Tile.h"
#include "SFML/Graphics.hpp"
class GridSquare
{
public:
	
	//std::vector<std::vector<int> > gridVector;
	static const int rows = 28; //width
	static const int colloms = 36; //height

	int gridLocationX;
	int gridLocationY;
	int logicValue;


	int getTileInt(int x, int y);
	void gridMaker(const int width, const int height, sf::RenderWindow &window);
	static bool moveChecker(int x, int y);

	/*GridSquare(int gridx, int gridy, int logValue)
	{
		gridLocationX = gridx;
		gridLocationY = gridy;
		logicValue = logValue;
	}

	void gridInit(const int width, const int height);
	*/
	GridSquare();

private:
	int tileVals[rows][colloms];
	Tile tileSquares[rows][colloms];
	
	


};

