#pragma once

#include "Shader_Program.h"

namespace Shader {

	class Simple_Shader : public Shader_Program {
	
	public:
		Simple_Shader();

		void setTime(float time);

	private:

		void getUniformLocations() override;

		GLuint m_locationTime = 0;

	};

}