#include "CRect.h"

CRect::CRect()
{
    //ctor
}

void CRect::CRect_RenderRect(int x, int y, int w, int h, SDL_Surface* dst, Uint8 colorR, Uint8 colorG, Uint8 colorB)
{
    SDL_Rect rect;

    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;

    SDL_FillRect(dst, &rect, SDL_MapRGB(dst->format, colorR, colorG, colorB));
}
