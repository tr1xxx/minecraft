#pragma once

#include "../Entity.h"
#include "../Model.h"

namespace Texture {

	class Atlas;

}

class Quad : public Entity {

public:
	Quad(Texture::Atlas& textureAtlas);

	const Model& getModel() const;

private:
	Model m_model;

};