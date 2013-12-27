#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event)
{
    if((Event->type == SDL_QUIT) ||(Event->key.keysym.sym == SDLK_ESCAPE))
    {
        Running = false;
    }
    if(Event->type == SDL_KEYDOWN)
    {
        switch(Event->key.keysym.sym)
        {
        case SDLK_s:
            Player->AddBlock();
            break;

        case SDLK_d:
            Player->RemoveBlock();
            break;

        case SDLK_UP:
            Player->VelY = -1;
            Player->VelX = 0;
            break;

        case SDLK_DOWN:
            Player->VelY = 1;
            Player->VelX = 0;
            break;

        case SDLK_LEFT:
            Player->VelY = 0;
            Player->VelX = -1;
            break;

        case SDLK_RIGHT:
            Player->VelY = 0;
            Player->VelX = 1;
            break;

        default:;
        }
    }
}
