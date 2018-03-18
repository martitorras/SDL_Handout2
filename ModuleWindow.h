#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

// TODO 1: Create the declaration of ModuleWindow class
#ifndef __MODULEWINDOW_H__
#define __MODULEWINDOW_H__

struct SDL_Window;
struct SDL_Surface;


class ModuleWindow : public Module
{
	bool Init() override;
	bool CleanUp() override;
public:
	SDL_Window* window = nullptr;
	SDL_Surface* surface = nullptr;
	SDL_Renderer* render = nullptr;
};

#endif // __MODULEWINDOW_H__
#endif // __ModuleWindow_H__