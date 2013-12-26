#include "CApp.h"

void CApp::OnLoop()
{
    for(int i = 0; i < CSnake::SnakeList.size(); i++)
    {
        if(!CSnake::SnakeList[i]) continue;

        CSnake::SnakeList[i]->OnLoop();
    }
}
