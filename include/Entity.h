#ifndef ENTITY_H
#define ENTITY_H

#include "olcPixelGameEngine.h"
#include "Renderer.h"


class Entity
{
    public:
        Entity(const olc::vf2d& pos, olc::Decal* decal, const float fAngle, const olc::vf2d& center, const olc::vf2d& scale, const olc::Pixel& tint);
        virtual ~Entity();
        olc::Sprite* sprite = nullptr;
        olc::Decal* decal = nullptr;
        olc::vf2d pos;
        float fAngle;
        olc::vf2d center;
        olc::vf2d scale;
        olc::Pixel tint;


    protected:

    private:

};

#endif // ENTITY_H
