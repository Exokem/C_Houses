// SeaHouses.cpp : Defines the entry point for the application.
//

#include "C_Houses.h"

Uint32* CH_GetSurfacePixel(SDL_Surface* surface, int x, int y)
{
	return (Uint8*)surface->pixels + y * surface->pitch + x * surface->format->BytesPerPixel;
}

Uint32 CH_GetSurfacePixelColor(SDL_Surface* surface, int x, int y)
{
	return *(Uint32*)CH_GetSurfacePixel(surface, x, y);
}

void CH_SetSurfacePixelColor(SDL_Surface* surface, int x, int y, Uint32 color)
{
	Uint32* pixel = CH_GetSurfacePixel(surface, x, y);
	*pixel = color;
}

