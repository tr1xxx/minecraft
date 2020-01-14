#pragma once

#include <GL/glew.h>
#include <string>

namespace Shader {

	class Shader_Program {

	public:
		Shader_Program(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
		~Shader_Program();

		void bind();
		void unbind();

	protected:

		virtual void getUniformLocations() = 0;

		GLuint getID() const;

		void loadFloat(GLuint location, float value);

	private:
		GLuint m_programID;

	};

}