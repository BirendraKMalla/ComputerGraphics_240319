//Program for creating house shape
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(5);

    // House body
    rectangle(60, 80, 150, 200);

    // Door
    rectangle(95, 140, 120, 200);

    // Roof
    line(60, 80, 100, 15);
    line(100, 15, 150, 80);

    // Window
    circle(100, 60, 10);

    getch();
    closegraph();
    return 0;
}
