#include "CApp.h"

CApp::CApp()
{
    Surf_Display = NULL;

    Running = true;

    //===

    framestarttime = 0;

    waittime = 1000.0f/FPS;
}

int CApp::OnExecute()
{
    if(OnInit() == false) return -1;

    SDL_Event Event;

    while(Running)
    {
        while(SDL_PollEvent(&Event))
        {
            OnEvent(&Event);
        }

        OnLoop();

        OnRender();

        delaytime = waittime - (SDL_GetTicks() - framestarttime);
        if(delaytime > 0)
            SDL_Delay((Uint32)delaytime);
        framestarttime = SDL_GetTicks();
    }

    OnCleanup();

    return 0;
}

int main(int argc, char* argv[])
{
    CApp theApp;

    return theApp.OnExecute();
}
