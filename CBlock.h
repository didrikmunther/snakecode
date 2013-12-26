#ifndef CBLOCK_H
#define CBLOCK_H

#include <SDL.h>
#include <vector>
#include "CRect.h"
#include <iostream>

class CBlock
{
public:
    CBlock(int x, int y);

    ~CBlock();

public:
    int PosX;
    int PosY;
    int NewPosX;
    int NewPosY;

    CBlock* Parent;

public:
    void OnRender(SDL_Surface* Surf_Destination);

    void OnLoop(int VelX, int VelY);

};

#endif // CBLOCK_H
