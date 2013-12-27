#include "CSnake.h"
#include "CBlock.h"

std::vector<CSnake*> CSnake::SnakeList;

CSnake::CSnake()
{
    VelX = 0;
    VelY = 0;

    CBlock* Head = new CBlock(100, 100);

    PrevParent = Head;

    BlockList.push_back(Head);
}

CSnake::~CSnake()
{
    for(std::vector<CBlock*>::iterator it = BlockList.begin(); it != BlockList.end(); it++)
    {
        delete (*it); // delete calls the deconstructor
                      // Remember that .clear() does not call the deconstructor on vectors of pointers!
    }
    BlockList.clear();
}

void CSnake::OnLoop()
{
    for(int i = 0; i < BlockList.size(); i++)
    {
        if(!BlockList[i]) continue;

        BlockList[i]->OnLoop(VelX, VelY);
    }
}

void CSnake::OnRender(SDL_Surface* Surf_Destination)
{
    for(int i = 0; i < BlockList.size(); i++)
    {
        if(!BlockList[i]) continue;

        BlockList[i]->OnRender(Surf_Destination);
    }
}

void CSnake::AddBlock()
{
    try
    {
        CBlock* Block = new CBlock(-20, -20);

        Block->Parent = PrevParent;

        PrevParent = Block;

        BlockList.push_back(Block);
    }
    catch(std::bad_alloc){/*"good enough"*/}
}

void CSnake::RemoveBlock()
{
    if(PrevParent->Parent != NULL) // If not the last object is the head.
    {
        PrevParent = PrevParent->Parent;

        std::vector<CBlock*>::iterator it = BlockList.end();

        delete (*it); // Does this destroy the whole element and object?

        BlockList.pop_back(); // Removes the last element from the vector!

    }
}
