
#include <stdio.h>
#include "SDL.h"

int main(int argc, char const *argv[])
{

    if (SDL_Init(SDL_INIT_VIDEO) == -1)
    {
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Hello SDL2", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);

    if (NULL == window)
    {
        return 1;
    }

    SDL_Surface *surface = SDL_GetWindowSurface(window);

    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0x99, 0x66));

    SDL_UpdateWindowSurface(window);

    printf("Hello %s\n", "SDL2");

    SDL_Delay(500);
    SDL_Event e;
    while (1)
    {
        SDL_PollEvent(&e);
        if (SDL_QUIT == e.type)
        {
            break;
        }
        SDL_Delay(16);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
