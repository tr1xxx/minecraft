#pragma once

class Application;
struct Entity;

namespace Renderer {

	class Master;

}

namespace State {

	class Game_State {

	public:
		Game_State(Application& application);

		virtual void input  (Entity& camera) = 0;
		virtual void update (Entity& camera) = 0;
		virtual void draw   (Renderer::Master& renderer) = 0;

	protected:
		Application* m_application;
	};

}