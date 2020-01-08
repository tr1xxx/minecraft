#pragma once

#include "Game_State.h"

class Application;

namespace State {

	class Playing : public Game_State {

	public:
		Playing(Application& application);

		void input  () override;
		void update () override;
		void draw   () override;
	};

}