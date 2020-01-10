#pragma once

#include "Shader_Program.h"

namespace Shader {

	class Simple_Shader : public Shader_Program {
	
	public:
		Simple_Shader();

	private:
		void bindAttributes() override;

	};

}