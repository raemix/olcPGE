#ifndef ENGINE_H
#define ENGINE_H

#include "olcPixelGameEngine.h"
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
    Renderer* renderer = nullptr;
    Entity* player = nullptr;

    olc::Sprite* sprite = nullptr;
    olc::Decal* decal = nullptr;
    olc::vf2d pos;
    float fAngle;
    olc::vf2d center;
    olc::vf2d scale;
    olc::Pixel tint;


    Entity* createEntity(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn);
    Entity* createPlayer();
    void Draw(Entity* e);


};

#endif // ENGINE_H
