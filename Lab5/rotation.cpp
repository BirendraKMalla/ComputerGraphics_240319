#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

#define PI 3.14

int main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, x4, y4, a, t;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter coordinates of starting point:\n");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of ending point:\n");
    scanf("%f %f", &x2, &y2);

    printf("Enter angle for rotation:\n");
    scanf("%f", &a);

    /* Original line */
    setcolor(5);
    line((int)x1, (int)y1, (int)x2, (int)y2);
    outtextxy((int)x2 + 2, (int)y2 + 2, "Original line");

    /* Degree to radian */
    t = a * (PI / 180);

    /* Rotation about origin */
    x3 = x1 * cos(t) - y1 * sin(t);
    y3 = x1 * sin(t) + y1 * cos(t);

    x4 = x2 * cos(t) - y2 * sin(t);
    y4 = x2 * sin(t) + y2 * cos(t);

    /* Rotated line */
    setcolor(7);
    line((int)x3, (int)y3, (int)x4, (int)y4);
    outtextxy((int)x3 + 2, (int)y3 + 2, "Line after rotation");

    getch();
    closegraph();
}
