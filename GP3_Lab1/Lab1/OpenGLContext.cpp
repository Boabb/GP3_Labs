#include "OpenGLContext.h"

OpenGLContext::OpenGLContext(SDL_Window* window)
{
	glContext = SDL_GL_CreateContext(window);


}

void OpenGLContext::swapBuffers(SDL_Window* window)
{

}
