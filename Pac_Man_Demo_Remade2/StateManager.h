#pragma once
#include <stack>
#include "PacMan.h"

class StateManager
{
	private:
		std::stack<StateManager*> states;

	public:
		void addState(StateManager *state);
		void loop();
		
		static void keyPressed(int code, PacMan *pacman);
		void keyReleased(int code);
	};







