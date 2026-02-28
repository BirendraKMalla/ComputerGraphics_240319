//Program for rotation
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() { 
    int gd = DETECT, gm;    
    float x1, y1, x2, y2, x3, y3, x4, y4, a, t;

    printf("Enter coordinates of starting point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of ending point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter angle for rotation (degrees): ");
    scanf("%f", &a);

    initgraph(&gd, &gm, ""); 

    
    setcolor(5);
    line((int)x1, (int)y1, (int)x2, (int)y2);
    outtextxy((int)x2 + 5, (int)y2 + 5, "Original line");


    t = a * (M_PI / 180.0); 

    
    x4 = x1 + (x2 - x1) * cos(t) - (y2 - y1) * sin(t);
    y4 = y1 + (x2 - x1) * sin(t) + (y2 - y1) * cos(t);

    
    setcolor(7);
    line((int)x1, (int)y1, (int)x4, (int)y4); 
    outtextxy((int)x4 + 5, (int)y4 + 5, "Line after rotation");

    getch(); 
    closegraph();
    return 0;
}