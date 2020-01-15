#pragma once

#include "Simple.h"

class Model;

namespace Renderer {

	class Master {

	public:

		void clear();

		void update();

		void draw(const Model& model);

	private:
		Simple m_simpleRenderer;
	};

}