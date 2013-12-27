#ifndef CSNAKE_H
#define CSNAKE_H

#include <vector>
#include <iostream>
#include <SDL.h>

class CBlock;

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
    void RemoveBlock();

    void SetHeadPos(int x, int y);

    CBlock* PrevParent;

    int VelX;
    int VelY;

};

#endif // CSNAKE_H
