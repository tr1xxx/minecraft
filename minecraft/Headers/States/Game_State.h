#pragma once

class Application;
class Camera;

namespace Renderer {

	class Master;

}

namespace State {

	class Game_State {

	public:
		Game_State(Application& application);

		virtual void input  (Camera& camera) = 0;
		virtual void update (Camera& camera, float dt) = 0;
		virtual void draw   (Renderer::Master& renderer) = 0;

	protected:
		Application* m_application;
	};

}