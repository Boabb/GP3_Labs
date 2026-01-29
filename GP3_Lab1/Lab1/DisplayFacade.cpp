#include "DisplayFacade.h"

DisplayFacade::DisplayFacade(const std::string& title, const int width, const int height, const std::string flagsAsString)
{
	this->window = Window(title, width, height, static_cast<Uint32>(std::stoul(flagsAsString))); 
												// Reads "SDL_WINDOW_OPENGL" as SDL_WINDOW_OPENGL (removes "")

	this->screenHeight = height;
	this->screenWidth = width;
}

void DisplayFacade::resize(int newWidth, int newHeight)
{

}

void DisplayFacade::swapBuffers()
{
	this->context.swapBuffers();
}
