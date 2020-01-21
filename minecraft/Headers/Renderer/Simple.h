#pragma once

#include <vector>
#include <SFML/System/Clock.hpp>

#include "../Shaders/Simple_Shader.h"

class Quad;

namespace Renderer {

	class Simple {

	public:

		void draw(const Quad& quad);

		void update();

	private:

		void prepare(const Quad& quad);

	private:

		std::vector< const Quad* > m_quads;

		Shader::Simple_Shader m_shader;

		sf::Clock m_clock;

	};

}