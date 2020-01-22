#pragma once

#include "Simple.h"

class Quad;
struct Entity;

namespace Renderer {

	class Master {

	public:

		void clear();

		void update(const Entity& camera);

		void draw(const Quad& model);

	private:
		Simple m_simpleRenderer;
	};

}