#pragma once

#include "../Glm_Common.h"

struct Entity;
class Camera;

namespace Maths {

	Matrix4 createViewMatrix	(const Camera& entity);
	Matrix4 createModelMatrix	(const Entity& entity);
	Matrix4 createProjMatrix	();

}
