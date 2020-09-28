#pragma once
#include <stack>
#include "PacMen.h"

class DirectionLoader
{
private:
	std::stack<DirectionLoader*> states;

public:
	void addState(DirectionLoader *state);
	void loop();

	static void keyPressed(int code, PacMen *pacmen);
	void keyReleased(int code);
};
