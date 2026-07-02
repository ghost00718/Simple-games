#ifndef GAMES_H
#define GAMES_H

#include <SDL2/SDL.h>
#include <orbis/Pad.h>

typedef struct {
    void (*init)(SDL_Renderer *renderer);
    void (*update)(ScePadData *pad);
    void (*render)(SDL_Renderer *renderer);
    void (*cleanup)(void);
} GameModule;

typedef struct {
    const char *name;
    const char *thumbnail_path;
    GameModule module;
} GameEntry;

GameModule flappy_get_module(void);

#endif
