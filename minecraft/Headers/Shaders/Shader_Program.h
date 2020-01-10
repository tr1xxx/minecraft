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
		void bindAttribute(GLuint location, const GLchar* name);

		virtual void bindAttributes() = 0;

	private:
		GLuint m_programID;

	};

}