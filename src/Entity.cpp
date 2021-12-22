#include "Entity.h"


Entity::Entity(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn)
{

    pos = posIn;
    decal = decalIn;
    fAngle = fAngleIn;
    center = centerIn;
    scale = scaleIn;
    tint = tintIn;

}

Entity::~Entity()
{
    //dtor
}



