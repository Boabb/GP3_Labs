#include "Mesh.h"

void Mesh::setVertices(const void* data, size_t vertexSize,
	const std::vector<PerVertexAttribute>& vertexAttributes)
{
	glBindVertexArray(ubo);

	glBindBuffer(GL_ARRAY_BUFFER, vbo);

	glBufferData(GL_ARRAY_BUFFER, vertexSize, data, GL_STATIC_DRAW);

	for (const auto& attr : vertexAttributes)
	{
		glEnableVertexAttribArray(attr.index);
		glVertexAttribPointer(attr.index, attr.size, attr.type,
			attr.normalised, attr.stride, (void*)attr.offset);
	}

	glBindVertexArray(0);

}