//Program for creating fish
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cleardevice();

    // Fish body
    ellipse(520, 200, 30, 330, 90, 30);

    // Eye
    circle(450, 193, 3);

    // Mouth
    line(430, 200, 450, 200);

    // Tail
    line(597, 185, 630, 170);
    line(597, 215, 630, 227);
    line(630, 170, 630, 227);

    // Tail details
    line(597, 200, 630, 200);
    line(597, 192, 630, 187);
    line(597, 207, 630, 213);

    // Fin
    line(500, 190, 540, 150);
    line(530, 190, 540, 150);

    getch();
    closegraph();
    return 0;
}
