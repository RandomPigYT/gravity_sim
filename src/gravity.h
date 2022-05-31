#ifndef GRAVITY_H
#define GRAVITY_H

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

typedef struct vec2_t{
	float x, y;
}vec2;


typedef struct planet_t{
	float radius;
	vec2 pos;
	
	float mass;
	
	vec2 velocity;
	
	
}planet;

extern planet* planets;
extern SDL_Renderer* renderer;


#endif
