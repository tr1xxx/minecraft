#pragma once

#include <GL/glew.h>
#include <string>

namespace Shader {

		GLuint loadShader(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);

}