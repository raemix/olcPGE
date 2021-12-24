#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"


class Player : public Entity
{
    public:
        Player(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn);

        virtual ~Player();
        void update() override;
        void updateWithInput(olc::vf2d mouse);

        int counter = 0;


    protected:

    private:
};

#endif // PLAYER_H
