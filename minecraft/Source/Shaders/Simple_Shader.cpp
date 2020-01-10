#include "../../Headers/Shaders/Simple_Shader.h"

namespace Shader {

	Simple_Shader::Simple_Shader() 
		: Shader_Program("Simple_Vertex", "Simple_Fragment") {
	


	}

	void Simple_Shader::bindAttributes() {

		bindAttribute(0, "inVertexPosition");

	}

}