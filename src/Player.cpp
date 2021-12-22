#include "Player.h"

Player::Player()
{
     sprite = new olc::Sprite("res/handgun/idle/survivor-idle_handgun_0.png");
     decal = new olc::Decal(sprite);
     location = olc::vf2d{20.0f, 50.0f};
}

Player::~Player()
{
    //dtor
}
