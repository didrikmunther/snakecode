#ifndef CAPP_H
#define CAPP_H

#include <SDL.h>
#include <vector>
#include "CRect.h"
#include "CSnake.h"
#include "CBlock.h"
#include <iostream>
#include <vld.h> // how do I use this? (Visual Leak Detector)

class CApp
{
private:
    bool Running;

    SDL_Surface* Surf_Display;

    //==

    Uint32 waittime;
    Uint32 framestarttime;
    Sint32 delaytime;

    #define FPS 5

public:
    CApp();

    int OnExecute();

public:
    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop();

    void OnRender();

    void OnCleanup();

public:
    CSnake* Player;

};

#endif // CAPP_H
