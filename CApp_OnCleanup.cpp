#include "CApp.h"

void CApp::OnCleanup()
{
    for(std::vector<CSnake*>::iterator it = CSnake::SnakeList.begin(); it != CSnake::SnakeList.end(); it++)
    {
        delete (*it); // This will call the deconstructor of the snake object that is deleted.
    }

    CSnake::SnakeList.clear();

    SDL_Quit();
}
