#ifndef minimap_H
#define minimao_H
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

typedef struct 
{
	SDL_Surface *back;//minback
	SDL_Surface*Dot;//mingamer
	SDL_Rect posBlit;//pos minback
	SDL_Rect posDot;//pos mingamer
}minimap;


void init_minimap(minimap*m);
void MAJMinimap(SDL_Rect posJoueur,  minimap * m, SDL_Rect camera, int redimensionnement);
void afficherminimap (minimap m, SDL_Surface * screen);
void Liberer (minimap * m);
#endif
