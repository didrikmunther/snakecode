#include "CApp.h"

void CApp::OnRender()
{
    CRect::CRect_RenderRect(0, 0, 640, 480, Surf_Display, 0x0, 0x00, 0x0);

    for(int i = 0; i < CSnake::SnakeList.size(); i++)
    {
        if(!CSnake::SnakeList[i]) continue;

        CSnake::SnakeList[i]->OnRender(Surf_Display);

//        CRect::CRect_RenderRect(CBlock::BlockList[i]->PosX, CBlock::BlockList[i]->PosY, 20, 20, Surf_Display, 0xFF, 0xFF, 0xFF);
    }

    SDL_Flip(Surf_Display);
}
