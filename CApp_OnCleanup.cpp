#include "CApp.h"

void CApp::OnCleanup()
{
    for(std::vector<CSnake*>::iterator it = CSnake::SnakeList.begin(); it != CSnake::SnakeList.end(); it++)
    {
        delete (*it);
    }

    CSnake::SnakeList.clear();

    SDL_Quit();
}
