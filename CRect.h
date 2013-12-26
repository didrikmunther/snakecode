#ifndef CRECT_H
#define CRECT_H

#include "SDL.h"

class CRect
{
public:
    CRect();

    static void CRect_RenderRect(int x, int y, int w, int h, SDL_Surface* dst, Uint8 colorR, Uint8 colorG, Uint8 colorB);
};

#endif // CRECT_H
