#include "GameEngine.h"
#include "renderer.h"
#include "SFML/Graphics.hpp"
#include "PacMen.h"


int main()
{

	
//-----------------------------------Create and initialize objects below this line ---------------------------------------------------------
	
	
	GameEngine engine;//engine instance has RenderWindow
	engine.createRenderWindow(engine.gameWindow);
	PacMen newPac;

	PacMen *pacPTR;
	pacPTR = &newPac;
//-----------------------------------Create and initialize objects above this line ---------------------------------------------------------

	




//-----------------------------------Handle game loop logic below this line ---------------------------------------------------------


	while (engine.engineUp(engine.gameWindow))//game loop
	{
		engine.eventHandler(engine.gameWindow, pacPTR);
		newPac.pacMove(pacPTR);
		renderer(engine.gameWindow, pacPTR);//handles draws
	}


}