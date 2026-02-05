#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int PolygonPoints[3][2] = {{10, 100}, {110, 100}, {110, 200}};

void PolyLine() {
    int iCnt;
    cleardevice();
    // Draw X and Y Axes
    line(0, 240, 640, 240); // X-axis
    line(320, 0, 320, 480); // Y-axis
    
    // Draw the Polygon
    for (iCnt = 0; iCnt < 3; iCnt++) {
        line(PolygonPoints[iCnt][0], PolygonPoints[iCnt][1],
             PolygonPoints[(iCnt + 1) % 3][0], PolygonPoints[(iCnt + 1) % 3][1]);
    }
}

void Reflect() {
    int iCnt;
    // Reflect across the horizontal axis (X-axis)
    // To flip it across the line y=240: NewY = 240 + (240 - OldY)
    for (iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][1] = 480 - PolygonPoints[iCnt][1];
    }
}

int main() {
    int gDriver = DETECT, gMode;
    int iCnt;

    // Initialize graphics - Ensure the path matches your TurboC3 installation
    initgraph(&gDriver, &gMode, "C:\\TurboC3\\BGI");

    // Initial Translation: Move points relative to the center (320, 240)
    for (iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][0] += 320;
        PolygonPoints[iCnt][1] = 240 - PolygonPoints[iCnt][1];
    }

    // Show original triangle
    PolyLine();
    outtextxy(10, 10, "Original Triangle (Press any key to Reflect)");
    getch();

    // Perform reflection and show result
    Reflect();
    PolyLine();
    outtextxy(10, 10, "Reflected Triangle");
    getch();

    closegraph();
    return 0;
}