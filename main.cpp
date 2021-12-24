#include <iostream>
#include "main.h"



int main()
{
    Engine demo;
    if (demo.Construct(cScreenWidth, cScreenHeight, pixelSize, pixelSize))
        std::cout << "Game Started" << std::endl;
        demo.Start();


    return 0;
}
