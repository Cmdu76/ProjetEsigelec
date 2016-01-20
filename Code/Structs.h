#ifndef SPRITE_H_INCLUDED
#define SPRITE_H_INCLUDED

#include <SDL2/SDL.h>

struct SDL_Context
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    int isOpen;
};
typedef struct SDL_Context SDL_Context;

struct Coords
{
    int x;
    int y;
};
typedef struct Coords Coords;

struct SDL_Sprite
{
    SDL_Texture* texture;
    SDL_Point pos;
    SDL_Rect rect;
};
typedef struct SDL_Sprite SDL_Sprite;

struct Maze
{
    int** tab;
    Coords size;
};
typedef struct Maze Maze;

#endif // SPRITE_H_INCLUDED
