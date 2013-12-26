#include "CApp.h"

bool CApp::OnInit()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) return false;

    if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) return false;

    SDL_WM_SetCaption("Press S to add block to snake (Malaxiz Snake Game made in C++/SDL (This program has memory leaks!))", NULL);

    Player = new CSnake();

    CSnake::SnakeList.push_back(Player);

    return true;
}
