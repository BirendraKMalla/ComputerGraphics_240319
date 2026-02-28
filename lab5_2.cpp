//Program for Scaling
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    float x1, y1, x2, y2, sx, sy, x3, y3, x4, y4;

    
    printf("Enter the starting point coordinates (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the ending point coordinates (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter scaling factors (sx sy): ");
    scanf("%f %f", &sx, &sy);

    
    initgraph(&gd, &gm, "");

    
    setcolor(5); 
    line((int)x1, (int)y1, (int)x2, (int)y2);
    outtextxy((int)x2 + 5, (int)y2 + 5, "Original line");

    
    x3 = x1 * sx;
    y3 = y1 * sy;
    x4 = x2 * sx;
    y4 = y2 * sy;

    
    setcolor(7); 
    line((int)x3, (int)y3, (int)x4, (int)y4);
    outtextxy((int)x4 + 5, (int)y4 + 5, "Scaled line");

    
    printf("\nPress any key to exit..."); 
    getch(); 
    closegraph();
    return 0;
}