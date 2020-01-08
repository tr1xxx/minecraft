#pragma once

#include <stack>
#include <memory>

#include "States/Game_State.h"

class Application {

public:
	Application();

	void runMainGameLoop();

	void pushState(std::unique_ptr<State::Game_State> state);
	void popState();

private:
	std::stack<std::unique_ptr<State::Game_State>>m_states;


};