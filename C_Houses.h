
#ifndef _C_HOUSES_
#define _C_HOUSES_


#define _API_ __declspec(dllexport)

#include "SDL.h"

#ifdef __cplusplus
extern "C" {
#endif

	/// <summary>
	/// Provides a pointer to the pixel at a specified position within an SDL_Surface.
	/// </summary>
	_API_ Uint32* CH_GetSurfacePixel(SDL_Surface* surface, int x, int y);

	/// <summary>
	/// Provides the pixel (color) at a specified position within an SDL_Surface.
	/// <br>
	/// The returned color is in RGB hex format.
	/// </summary>
	_API_ Uint32 CH_GetSurfacePixelColor(SDL_Surface* surface, int x, int y);

	/// <summary>
	/// Overwrites the pixel at a specified position within an SDL_Surface.
	/// </summary>
	_API_ void CH_SetSurfacePixelColor(SDL_Surface* surface, int x, int y, Uint32 color);

#ifdef __cplusplus
}
#endif

#endif