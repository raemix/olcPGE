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
    Player player;
};

#endif // ENGINE_H
