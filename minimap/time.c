#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include "time.h"

void initialiserTemps(Time *t){
	TTF_Init();
	t->font = TTF_OpenFont("font.ttf", 80);

	t->time= 0;

	sprintf(t->timeString,"00:00");

	SDL_Color color = {255,0,255};

	t->msg = TTF_RenderText_Solid(t->font,t->timeString,color);

}

void afficherTemps(Time *t, SDL_Surface *screen){

	SDL_Color color = {255,255,255};

	t->time++;

	if(t->time % 60 == 0){

		sprintf(t->timeString,"%02d:%02d\n",t->time/60/60,(t->time/60)%60);

		t->msg = TTF_RenderText_Solid(t->font,t->timeString,color);

	}

	SDL_BlitSurface(t->msg,NULL,screen,NULL);

}

void free_temps(Time*time,SDL_Surface *screen)
{SDL_FreeSurface(time->msg);
 TTF_CloseFont(time->font);
}
