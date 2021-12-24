#include "Engine.h"



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


    //mouse = new olc::vf2d;
    sprite = new olc::Sprite("res/crossHair.png");
    decal = new olc::Decal(sprite);
    pos = olc::vf2d{300.0f, 250.0f};
    fAngle = 0.0f;
    scale = {fImageScale, fImageScale};
    tint = olc::Pixel(255,255,255,255);
    decalSize = imageSize * scale;
    center = {0.0f, 0.0f};

    player = createPlayer(pos, decal, fAngle, center, scale, tint);
    if (player == nullptr) Exit();
    return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
    Clear(olc::VERY_DARK_BLUE);
    // called once per frame
    mouse = { float(GetMouseX()) , float(GetMouseY()) };
    player->updateWithInput(mouse);

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

void Engine::Draw(Player* e)
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

    Entity* e;
    e = new Entity(posIn, decalIn, fAngleIn, centerIn, scaleIn, tintIn);

    if (e == NULL || e == nullptr) {
        std::cout << "Failed to create entity Player" << std::endl;
        return nullptr;
    } else {
        return e;

    }

}


Player* Engine::createPlayer(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn)
{

    Player* p;
    p = new Player(posIn, decalIn, fAngleIn, centerIn, scaleIn, tintIn);

    if (p == NULL || p == nullptr) {
        std::cout << "Failed to create entity Player" << std::endl;
        return nullptr;
    } else {
        return p;

    }

}

void Engine::Exit()
{
    exit;
}
