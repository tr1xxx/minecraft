#include "../../Headers/Shaders/Shader_Program.h"
#include "../../Headers/Shaders/Shader_Loader.h"

namespace Shader {

	Shader_Program::Shader_Program(const std::string& vertexShaderFile, const std::string& fragmentShaderFile) : m_programID (loadShader(vertexShaderFile, fragmentShaderFile)) {
	


	}

	Shader_Program::~Shader_Program() {
	
		glDeleteProgram(m_programID);

	}

	void Shader_Program::bind() {
	
		glUseProgram(m_programID);

	}

	void Shader_Program::unbind() {
	
		glUseProgram(0);

	}

}