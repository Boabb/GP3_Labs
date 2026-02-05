#pragma once

#include <glm/glm.hpp>

struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 texcoord;

    Vertex(const glm::vec3& pos, const glm::vec3& norm, const glm::vec2& tex)
        : position(pos), normal(norm), texcoord(tex) {}
};

#include <GL/glew.h>

struct PerVertexAttribute
{
    GLuint index;
    GLint size;
    GLenum type;
    GLboolean normalised;
    GLsizei stride;
    size_t offset;

    PerVertexAttribute(GLuint idx, GLint compSize, GLenum dataType, 
        GLboolean isNorm, GLsizei strideAmount, size_t offsetAmount) 
        : index(idx), size(compSize), type(dataType), 
        normalised(isNorm), stride(strideAmount), offset(offsetAmount)

    {}
};
