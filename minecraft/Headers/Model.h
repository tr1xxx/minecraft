#pragma once

#include <GL/glew.h>

#include <vector>

class Model {

public:
	Model(const std::vector<GLfloat>& vertexPositions);
	~Model();

	void bind();
	void unbind();

private:
	GLuint m_vertexId;

};