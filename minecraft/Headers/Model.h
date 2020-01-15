#pragma once

#include <GL/glew.h>

#include <vector>

class Model {

public:
	Model(const std::vector<GLfloat>& vertexPositions,
		  const std::vector<GLfloat>& textureCoordinates,
		  const std::vector<GLuint>& indices);
	~Model();

	void bind()	  const;
	void unbind() const;

	GLuint getIndicesCount() const;

private:
	void addVBO(int dim, const std::vector<GLfloat>& data);
	void addEBO(const std::vector<GLuint>& indices);

	std::vector<GLuint> m_buffers;
	GLuint m_vao;

	GLuint m_vboCount = 0;
	GLuint m_indicesCount = 0;

};