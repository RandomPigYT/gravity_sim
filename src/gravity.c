#include "gravity.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(int argc, char** argv){
	

	
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
	
		fprintf(stderr, "Error initializing SDL2.\nLOG: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	

	SDL_Window* window = NULL;

	window = SDL_CreateWindow("gravity", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN);
		
	if(window == NULL){
		fprintf(stderr, "Error creating window.\nLOG:%s\n", SDL_GetError());
	}
	

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	
	bool isRunning = true;
	bool simRunning = false;

	SDL_Event e;
	while(isRunning){
		
		if(SDL_PollEvent(&e)){
			
			if(e.type == SDL_QUIT) isRunning = false;
		}
		
		
	}


	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
