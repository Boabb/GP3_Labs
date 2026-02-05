#pragma once
#include <vector>
#include "Vertex.h"
class Mesh
{
	void setVertices(const void* data, size_t vertexSize, const std::vector<PerVertexAttribute>& vertices);

private:
	GLuint ubo;
	GLuint ebo;
	GLuint vbo;
};

