#include <iostream>
#include "main.h"



int main()
{
    Engine demo;
    if (demo.Construct(cScreenWidth, cScreenHeight, pixelSize, pixelSize))
        demo.Start();

    if (demo.engineErrorFlag) {
        system("Pause");

    }
    return 0;
}
