//Program for reflection aong x-axis:
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int Original[3][2];
int Reflected[3][2];

void DrawAxes()
{
    setcolor(WHITE);
    line(0,240,640,240);   // X-axis
    line(320,0,320,480);   // Y-axis
}

void DrawTriangle(int P[3][2], int color)
{
    int i;
    setcolor(color);
    for(i = 0; i < 3; i++)
    {
        line(P[i][0], P[i][1],
             P[(i+1)%3][0], P[(i+1)%3][1]);
    }
}

void ReflectX()
{
    int i;
    for(i = 0; i < 3; i++)
    {
        Reflected[i][0] = Original[i][0];
        Reflected[i][1] = 480 - Original[i][1];
    }
}

int main()
{
    int gd = DETECT, gm;
    int i, x, y;

    printf("Enter coordinates of triangle:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Point %d (x y): ", i+1);
        scanf("%d %d", &x, &y);

        // Convert to screen coordinates
        Original[i][0] = 320 + x;
        Original[i][1] = 240 - y;
    }

    initgraph(&gd, &gm, "");

    cleardevice();
    DrawAxes();

    // Draw original triangle
    DrawTriangle(Original, WHITE);
    outtextxy(10, 10, "White: Original Triangle");

    // Reflect and draw reflected triangle
    ReflectX();
    DrawTriangle(Reflected, RED);
    outtextxy(10, 25, "Red: Reflected Triangle (X-axis)");

    getch();
    closegraph();
    return 0;
}
