#include "minimap.h"
#include <SDL/SDL.h>


void init_minimap (minimap *m)

{ m->back=IMG_Load("img/mini_map.png");
  m->Dot=IMG_Load("img/persomini.png");
  m->posBlit.x =250;
  m->posBlit.y =19;//pos of minimap
  m->posDot.x =250;
  m->posDot.y =21;//posof dot
}


void MAJMinimap(SDL_Rect posJoueur,  minimap * m, SDL_Rect camera, int redimensionnement)

{

  SDL_Rect posJoueurABS;//position absolue de joueur
  posJoueurABS.x = 0;
  posJoueurABS.y = 0;
  posJoueurABS.x = posJoueur.x + camera.x;
  posJoueurABS.y = posJoueur.y + camera.y;
  m->posDot.x=(posJoueurABS.x * redimensionnement/100)+250;//dot
  m->posDot.y=(posJoueurABS.y * redimensionnement/100)+21;

}



void afficherminimap (minimap m, SDL_Surface * screen)

{

SDL_BlitSurface(m.back,NULL,screen,&(m.posBlit));
	SDL_BlitSurface(m.Dot,NULL,screen,&(m.posDot));

}




