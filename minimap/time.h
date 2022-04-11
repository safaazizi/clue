#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <time.h>






typedef struct Time {

	SDL_Surface *msg; /*!< Surface. */
	TTF_Font *font;
	int time;
	char timeString[10];

} Time;



void initialiserTemps(Time *time);
void afficherTemps(Time *time,SDL_Surface *screen);
void free_temps(Time *time,SDL_Surface *screen);
/*
typedef struct temps
{
SDL_Surface *texte;//image qui contient le temps
 SDL_Rect position;// position du clock
  
    TTF_Font *police ;

 char entree[100]; // chaine de caractere . forme "mm:ss"
 int secondesEcoulees; // variable entier qui contient le nbre de secondes ecoulés
SDL_Color couleurBlanche;// couleur de texte a afficher
time_t t1,t2; //t1 temps initiale ,,, t2 temps actuel
int min, sec;// minutes et secondes
}temps;

void initialiser_temps(temps *t);
void afficher_temps(temps *t, SDL_Surface *ecran);
void free_temps(temps *t,SDL_Surface *ecran);*/
