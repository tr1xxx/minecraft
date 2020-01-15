#include "../../Headers/Renderer/Master.h"

#include "../../Headers/Display.h"

namespace Renderer {

	void Master::clear() {
	
		Display::clear();

	}

	void Master::update() {

		m_simpleRenderer.update();
	
		Display::update();

	}

	void Master::draw(const Model& model) {
	
		m_simpleRenderer.draw(model);

	}

}