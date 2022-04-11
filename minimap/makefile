all:time.o minimap.o  main.o
	gcc  time.o minimap.o  main.o -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -o game
main.o:main.c
	gcc -c main.c -g 
minimap.o:minimap.c
	gcc -c minimap.c -g 
time.o:time.c
	gcc -c time.c -g 

