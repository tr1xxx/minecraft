#pragma once

#include "Game_State.h"

#include "../Model.h"
#include "../Temp/Quad.h"

#include "../../Headers/Shaders/Simple_Shader.h"
#include "../../Headers/Texture/Texture.h"

class Application;

namespace State {

	class Playing : public Game_State {

	public:
		Playing(Application& application);

		void input  () override;
		void update () override;
		void draw   (Renderer::Master& renderer) override;

	private:
		Shader::Simple_Shader m_shader;
		Texture::Basic_Texture m_texture;

		Quad m_quad;

	};

}