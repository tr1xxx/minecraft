#include "../../Headers/Texture/Texture.h"

#include <SFML/Graphics/Image.hpp>

namespace Texture {

	void Basic_Texture::load(const std::string& fileName) {

		std::string filePath = "Data/Textures" + fileName + ".png";

		sf::Image image;
		image.loadFromFile(filePath);

		glGenTextures(1, &m_textureID);
		glBindTexture(GL_TEXTURE_2D, m_textureID);

		glTexImage2D(GL_TEXTURE_2D,
						0,
						GL_RGBA,
						image.getSize().x,
						image.getSize().y,
						0,
						GL_RGBA,
						GL_UNSIGNED_BYTE,
						image.getPixelsPtr());
	}

}