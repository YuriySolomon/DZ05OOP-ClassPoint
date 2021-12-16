#include "Point.h"

int main()
{
    setlocale(0, "");

    Point p;
    p.ShowPoint();
    p.SetCoord_y(10);
    p.ShowPoint();
    p.PointUp(2);
    p.ShowPoint();
    p.DrowPoint();
    p.PointRight(15);
    p.DrowPoint(); 
    system("pause >> NULL");
}