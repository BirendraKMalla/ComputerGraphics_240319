//Program for translation
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty;

    printf("Enter x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("Enter tx, ty: ");
    scanf("%d %d", &tx, &ty);

    
    initgraph(&gd, &gm, ""); 

    
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    outtextxy(x1, y1 - 10, "Original");

    
    setcolor(YELLOW);
    line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    outtextxy(x1 + tx, y1 + ty - 10, "Translated");

    getch(); 
    closegraph();
    return 0;
}