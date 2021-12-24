#ifndef ENGINE_H
#define ENGINE_H

//#define OLC_PGE_APPLICATION

#include "Entity.h"
#include "Player.h"




class Engine : public olc::PixelGameEngine
{
public:
    Engine();
    virtual ~Engine();
    bool OnUserUpdate(float fElapsedTime) override;
    bool OnUserCreate() override;
    bool engineErrorFlag = true;


protected:

private:
    Player* player = nullptr;

    olc::Sprite* sprite = nullptr;
    olc::Decal* decal = nullptr;
    olc::vf2d pos;
    float fAngle;
    olc::vf2d center;
    olc::vf2d scale;
    olc::Pixel tint;
    olc::vf2d imageSize = {32.0f, 32.0f};
    olc::vf2d decalSize;
    float fImageScale = 1.0f;
    olc::vf2d fCenterFinder = {0.5f, 0.5f};
    olc::vf2d mouse;

    Entity* createEntity(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn);
    Player* createPlayer(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn);
    void Draw(Entity* e);
    void Draw(Player* e);

    void Exit();

};

#endif // ENGINE_H
