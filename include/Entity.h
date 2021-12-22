#ifndef ENTITY_H
#define ENTITY_H

#include "olcPixelGameEngine.h"

class Entity
{
    public:
        Entity();
        virtual ~Entity();
        olc::Sprite* sprite = nullptr;
        olc::Decal* decal = nullptr;
        olc::vf2d location;

    protected:

    private:

};

#endif // ENTITY_H
