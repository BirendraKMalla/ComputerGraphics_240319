#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

// Global coordinates for the triangle
int PolygonPoints[3][2] = {{10, 100}, {110, 100}, {110, 200}};

void PolyLine() {
    int iCnt;
    cleardevice();
    
    // Draw Cartesian Axes
    line(0, 240, 640, 240); // X-axis
    line(320, 0, 320, 480); // Y-axis
    
    // Draw the Polygon using the point array
    for (iCnt = 0; iCnt < 3; iCnt++) {
        line(PolygonPoints[iCnt][0], PolygonPoints[iCnt][1],
             PolygonPoints[(iCnt + 1) % 3][0], PolygonPoints[(iCnt + 1) % 3][1]);
    }
}

void Reflect() {
    int iCnt;
    // Reflect across the Vertical Axis (Y-axis)
    // Formula: NewX = TotalWidth - OldX
    for (iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][0] = 640 - PolygonPoints[iCnt][0];
    }
}

int main() {
    int gd = DETECT, gm;
    int iCnt;

    // Initialize graphics - path must point to your BGI folder
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    // Initial Transformation: Shift points to the center of the screen
    // Moves (0,0) to (320, 240)
    for (iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][0] += 320;
        PolygonPoints[iCnt][1] = 240 - PolygonPoints[iCnt][1];
    }

    // Phase 1: Show original translated triangle
    PolyLine();
    outtextxy(10, 10, "Original Position. Press any key to reflect...");
    getch();

    // Phase 2: Perform Y-axis reflection and show result
    Reflect();
    PolyLine();
    outtextxy(10, 10, "Reflected across Y-axis.");
    getch();

    closegraph();
    return 0;
}