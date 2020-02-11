#pragma once

#include "Glm_Common.h"

#include "Entity.h"


class Camera : public Entity {

public:

	Camera();

	void input(float dt);

	const Matrix4& getViewMatrix() const;
	const Matrix4& getProjectionMatrix() const;

	void update();

private:
	void mouseInput();

	Matrix4 m_viewMatrix;
	Matrix4 m_projectionMatrix;

};