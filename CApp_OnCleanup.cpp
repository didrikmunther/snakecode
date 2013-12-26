#include "CApp.h"

void CApp::OnCleanup()
{
//    std::vector<CBlock*>::iterator it;
//
//    for ( it = Player->BlockList.begin(); it != Player->BlockList.end(); )
//    {
//      delete * it;
//      it = Player->BlockList.erase(it);
//    }
//
//    for(int i = 0; i < CSnake::SnakeList.size(); i++)
//    {
//        if(!CSnake::SnakeList[i]) continue;
//
//        //CSnake::SnakeList[i]->BlockList.erase(); // Not working... needs some kind of vector iterator argument
//
//        CSnake::SnakeList[i]->BlockList.clear();
//    }

    for(std::vector<CSnake*>::iterator it = CSnake::SnakeList.begin(); it != CSnake::SnakeList.end(); it++)
    {
        delete (*it);
    }

    CSnake::SnakeList.clear();

    SDL_Quit();
}
