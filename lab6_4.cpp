//Program for creating man object
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(9);

    // Head
    circle(150, 150, 35);

    // Body
    line(150, 185, 150, 300);

    // Arms
    line(150, 200, 120, 230);
    line(150, 200, 180, 230);

    // Legs
    line(150, 300, 120, 330);
    line(150, 300, 180, 330);

    // Text
    outtextxy(230, 350, "HI, This is me.");

    getch();
    closegraph();
    return 0;
}
