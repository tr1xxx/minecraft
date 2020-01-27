#pragma once

#include "Simple.h"

class Quad;
class Camera;

namespace Renderer {

	class Master {

	public:

		void clear();

		void update(const Camera& camera);

		void draw(const Quad& model);

	private:
		Simple m_simpleRenderer;
	};

}