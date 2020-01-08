#pragma once

class Application;

namespace State {

	class Game_State {

	public:
		Game_State(Application& application);

		virtual void input  () = 0;
		virtual void update () = 0;
		virtual void draw   () = 0;

	protected:
		Application* m_application;
	};

}