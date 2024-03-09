

#include <iostream>
#include "figuri.h"

int main()
{
    vsefiguri final;
    int number =0;
    while (number != 4)
    {
        cout << "Select a shapes!\n";
        cout << "1.Circle" << endl;
        cout << "2.Box" << endl;
        cout << "3.Square" << endl;
        cout << "4.End" << endl;

        cin >> number;
        switch (number)
        {
        case 1:
            final.setCircleFigura();
            final.coutista(final.getCircleFigura());
            cout << endl;
            break;
        case 2:
            final.setBoxFigura();
            final.coutistb(final.getBoxFigura());
            cout << endl;
            break;
        case 3:
            final.setSquareFigura();
            final.coutistc(final.getSquareFigura());
            cout << endl;
            break;
        }
    }
}
