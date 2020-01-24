#include "../../Headers/States/Playing.h"

#include <iostream>
#include <SFML/System/Clock.hpp>

#include "../../Headers/Renderer/Master.h"

namespace State {

	sf::Clock clock;

	Playing::Playing(Application& application)
	: Game_State(application) {
	
		m_texture.load("grass");
		m_texture.bind();

		Quad* quad = new Quad();
		quad->rotation.x = 90;
		quad->position = { 0.4, 0.4, 0 };
		m_quads.push_back(quad);

		std::cout << m_quads.size() << std::endl;

	}

	void Playing::input(Entity& camera) {
	


	}

	void Playing::update(Entity& camera) {
		for (auto& quad : m_quads)
		{
			quad->position.z = sin(clock.getElapsedTime().asSeconds());
		}
	}

	void Playing::draw(Renderer::Master& renderer) {

		for (auto& quad : m_quads)
			renderer.draw(*quad);

	}

}