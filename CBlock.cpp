#include "CBlock.h"

CBlock::CBlock(int x, int y)
{
    PosX = x;
    PosY = y;

    Parent = NULL;

    NewPosX = x;
    NewPosY = y;
}

CBlock::~CBlock()
{
}

void CBlock::OnRender(SDL_Surface* Surf_Destination)
{
    CRect::CRect_RenderRect(PosX, PosY, 20, 20, Surf_Destination, 0xFF, 0xFF, 0xFF);
}

void CBlock::OnLoop(int VelX, int VelY)
{

    PosX = NewPosX;
    PosY = NewPosY;

    if(Parent != NULL)
    {
        NewPosX = Parent->PosX;
        NewPosY = Parent->PosY;
    }
    else // This means this is the head obj.
    {
        NewPosX = PosX + VelX * 20;
        NewPosY = PosY + VelY * 20;
    }
}
