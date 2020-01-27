#pragma once

#include "Game_State.h"

#include "../Model.h"
#include "../Temp/Quad.h"

#include "../../Headers/Shaders/Simple_Shader.h"
#include "../../Headers/Texture/Texture_Atlas.h"

class Application;
class Camera;

namespace State {

	class Playing : public Game_State {

	public:
		Playing(Application& application);

		void input  (Camera& camera) override;
		void update (Camera& camera, float dt) override;
		void draw   (Renderer::Master& renderer) override;

	private:
		Shader::Simple_Shader m_shader;
		Texture::Atlas m_texture;

		Quad m_quad;

	};

}