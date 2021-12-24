#include "Player.h"



Player::Player(const olc::vf2d& posIn, olc::Decal* decalIn, const float fAngleIn, const olc::vf2d& centerIn, const olc::vf2d& scaleIn, const olc::Pixel& tintIn) : Entity(posIn, decalIn, fAngleIn, centerIn, scaleIn, tintIn)

{
    //ctor

}

Player::~Player()
{
    //dtor
}

void Player::update()
{}

void Player::updateWithInput(olc::vf2d mouse)
{

    center = (imageSize * scale) * fCenterFinder;
    pos = mouse - center;
    if (counter % 100 == 0) {
        std::cout << "\nCenter: " << center << "\nMouse: " << mouse << "\npos: " << pos << "\n" << std::endl;

    }
    counter++;
    fAngle+=.01f;

}

