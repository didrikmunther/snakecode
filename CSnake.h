#ifndef CSNAKE_H
#define CSNAKE_H

#include <vector>
#include <iostream>
#include "CBlock.h"

class CSnake
{
public:
    CSnake();

    ~CSnake();

    static std::vector<CSnake*> SnakeList;

    std::vector<CBlock*> BlockList;

    CBlock* Head;

public:
    void OnLoop();

    void OnRender(SDL_Surface* Surf_Destination);

public:
    void AddBlock();

    CBlock* PrevParent;

    int VelX;
    int VelY;

};

#endif // CSNAKE_H
