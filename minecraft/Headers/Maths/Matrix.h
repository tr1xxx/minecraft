#pragma once

#include "../Glm_Common.h"

struct Entity;

namespace Maths {

	Matrix4 createViewMatrix	(const Entity& entity);
	Matrix4 createModelMatrix	(const Entity& entity);
	Matrix4 createProjMatrix	();

}
