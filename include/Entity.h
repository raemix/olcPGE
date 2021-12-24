#ifndef ENTITY_H
#define ENTITY_H

#include "olcPixelGameEngine.h"


class Entity
{
    public:
        Entity(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn);
        virtual ~Entity();
        virtual void update();

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
        const char* Name;


    protected:

    private:

};

#endif // ENTITY_H
