

#include <iostream>
#include "figuri.h"

int main()
{
    vsefiguri final;
    int number;
    cout << "Select a shapes!\n";
    cout << "1.Circle" << endl;
    cout << "2.Box" << endl;
    cout << "3.Square" << endl;
    cin>> number;
    switch(number)
    {
    case 1:
        final.setCircleFigura();
        break;
    case 2:
        final.setBoxFigura();
        break;
    case 3:
        final.setSquareFigura();
        break;
    }
}
