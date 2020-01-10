#pragma once

#include "Game_State.h"
#include "../Model.h"
#include "../../Headers/Shaders/Simple_Shader.h"

class Application;

namespace State {

	class Playing : public Game_State {

	public:
		Playing(Application& application);

		void input  () override;
		void update () override;
		void draw   () override;

	private:

		Model m_model;

		Shader::Simple_Shader m_shader;

	};

}