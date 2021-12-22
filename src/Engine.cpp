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
    renderer = new Renderer();

    sprite = new olc::Sprite("res/handgun/idle/survivor-idle_handgun_0.png");
    decal = new olc::Decal(sprite);
    pos = olc::vf2d{20.0f, 50.0f};
    fAngle = 0.0f;
    center = {20.0f, 50.0f};
    scale = {0.2f, 0.2f};
    tint = olc::Pixel(255,255,0,255);
    player = createEntity(pos, decal, fAngle, center, scale, tint);

    return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
    Clear(olc::VERY_DARK_BLUE);
    // called once per frame
    olc::vf2d mouse = { float(GetMouseX()), float(GetMouseY())};
    //DrawSprite(player->pos, player->sprite);
    Draw(player);
//    engineErrorFlag = true;
    return true;
}

void Engine::Draw(Entity* e)
{
    const olc::vf2d& pos = e->pos;
    olc::Decal* decal = e->decal;
    const float fAngle = e->fAngle;
    const olc::vf2d& center = e->center;
    const olc::vf2d& scale = e->scale;
    const olc::Pixel& tint = e->tint;



    DrawRotatedDecal(pos, decal, fAngle, center, scale, tint);
}

Entity* Engine::createEntity(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn)
{
    /*
    pos = posIn;
    decal = decalIn;
    fAngle = fAngleIn;
    center = centerIn;
    scale = scaleIn;
    tint = tintIn;
    */
    Entity* e;
    e = new Entity(posIn, decalIn, fAngleIn, centerIn, scaleIn, tintIn);

    if (e == NULL || e == nullptr) {
        std::cout << "Failed to create entity Player" << std::endl;
    } else {
        return e;

    }

}




 Entity* Engine::createPlayer()
 {

}


