#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "SDL/include/SDL.h"
#include "SDL_Image/include/SDL_image.h"

// TODO 2: Init the library and check for possible error
// using SDL_GetError()
bool ModuleWindow::Init() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		LOG("SDL coud not be initialized! SDL_Error: %s\n", SDL_GetError());
		return false;
	}
	if (IMG_Init(IMG_INIT_PNG) < 0) {
		printf("IMG_INIT: %s\n", IMG_GetError());
		return false;
	}
	window = SDL_CreateWindow("Finestra SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		LOG("Could not create window: %s\n", SDL_GetError());
		return false;
	}
	else return true;
}
bool ModuleWindow::CleanUp() {
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();
	return true;
}
// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

