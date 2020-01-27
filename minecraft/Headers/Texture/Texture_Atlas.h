#pragma once

#include "Texture.h"

#include <vector>

#include "../Glm_Common.h"

namespace Texture {

	class Atlas : public Basic_Texture {
	
	public:
		Atlas(const std::string& textureName, GLuint size, GLuint textureSize);

		std::vector<GLfloat> getTextureCoords(const Vector2& location);

	private:
		GLuint m_size;
		GLuint m_textureSize;

	};

}