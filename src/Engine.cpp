#include "Engine.h"

#define OLC_PGE_APPLICATION



Engine::Engine()
{

    sAppName = "Engine";
}

Engine::~Engine()
{
    //dtor
}

bool Engine::OnUserCreate()
{
    // Called once at the start, so create things here


    return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
    Clear(olc::VERY_DARK_BLUE);
    // called once per frame
    olc::vf2d mouse = { float(GetMouseX()), float(GetMouseY())};
    DrawSprite(player.location, player.sprite);

//    engineErrorFlag = true;
    return true;
}



