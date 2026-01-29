#pragma once

#include <string>
#include "Window.h"
#include "OpenGLContext.h"

class DisplayFacade {
public:
    // Default constructor
    DisplayFacade();

    // Constructor
    //DisplayFacade(const std::string& title, const int width, const int height);
    DisplayFacade(const std::string& title, const int width, const int height, const std::string flagsAsString);

    // Destructor
    ~DisplayFacade();

    // Resize the display
    void resize(int newWidth, int newHeight);

    // Swap buffers
    void swapBuffers();

    // Getters for screen dimensions
    int getWidth() const { return screenWidth; };
    int getHeight() const { return screenWidth; };

private:
    Window window;           // Window wrapper
    OpenGLContext context;   // OpenGL context wrapper

    int screenWidth;         // Current width of the screen
    int screenHeight;        // Current height of the screen
};

