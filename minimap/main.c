#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "minimap.h"
#include "time.h"

int main()
{
SDL_Init(SDL_INIT_VIDEO);
SDL_Surface *screen ,*perso;
screen=SDL_SetVideoMode (1300, 700, 32,SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_Rect camera,posperso;
SDL_Event event;
minimap m;
Time t;
SDL_Surface *back;
perso=IMG_Load("img/ouada");//perso
back=IMG_Load("img/back");//back
int continuer=1;
init_minimap(&m);
camera.x=0;
camera.y=0;
camera.w=1300;
camera.h=700;
posperso.x=0;
posperso.y=260;//position de perso 
SDL_EnableKeyRepeat(100,10);//Enables or disables the keyboard repeat rate. delay specifies how long the key must be pressed before it begins repeating
initialiserTemps(&t);
while(continuer)
{
   
    SDL_BlitSurface(back,NULL,screen,NULL);
while(SDL_PollEvent(&event))
	{

		switch(event.type)
		{
		case SDL_QUIT:

			continuer=0;
		break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
                case SDLK_ESCAPE:
					
					           continuer = 0;
				                 break;
          
                case SDLK_LEFT:
                
                    posperso.x-=9;
               
                    
                break;
                case SDLK_RIGHT:
                 
                      posperso.x+=9;
                   
                   
                    
                break;
                case SDLK_UP:
                    
                      posperso.y-=9;
                break;  
                case SDLK_DOWN:
                    
                      posperso.y+=9;

                break;  

            }
            break;
            
        }
    }        


SDL_BlitSurface(perso,NULL,screen,&posperso);
MAJMinimap(posperso , &m, camera, 50);
afficherminimap(m,screen);
afficherTemps(&t,screen);



SDL_Flip(screen);//mise à jour de l'écran
//SDL_Delay();

}

    //return 0;
}


