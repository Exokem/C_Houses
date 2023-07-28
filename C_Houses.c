// SeaHouses.cpp : Defines the entry point for the application.
//

#include "C_Houses.h"

Uint32* CH_GetSurfacePixel(SDL_Surface* surface, int x, int y)
{
	return (Uint8*)surface->pixels + y * surface->pitch + x * surface->format->BytesPerPixel;
}

void CH_GetSurfacePixelColor(SDL_Surface* surface, int x, int y, Uint8* r, Uint8* g, Uint8* b)
{
	Uint32* pixel = CH_GetSurfacePixel(surface, x, y);
	SDL_GetRGB(*pixel, surface->format, r, g, b);
}

void CH_SetSurfacePixelColor(SDL_Surface* surface, int x, int y, Uint8 r, Uint8 g, Uint8 b)
{
	Uint32* pixel = CH_GetSurfacePixel(surface, x, y);

	// May have extra padding:
	//  8-bit: 00000000 00000000 00000000 RRRGGGBB
	// 16-bit: 00000000 00000000 ???????? ????????
	// 24-bit: 00000000 RRRRRRRR GGGGGGGG BBBBBBBB
	// 32-bit: ???????? ???????? ???????? ????????
	// There are also other formats...

	*pixel = SDL_MapRGB(surface->format, r, g, b);
}

