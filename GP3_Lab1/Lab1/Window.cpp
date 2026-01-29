#include "Window.h"

Window::Window(const std::string& title, int w, int h, Uint32 flags)
{

	sdlWindow = SDL_CreateWindow(title.c_str(), width, height, w, h, flags);
}
