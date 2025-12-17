#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2;
    int x, y, dx, dy, p;
    int sx, sy;

    while (1) {
        printf("Enter first coordinate: ");
        scanf("%d%d", &x1, &y1);

        if (x1 == -1) {
            closegraph();
            return 0;
        }

        printf("Enter second coordinate: ");
        scanf("%d%d", &x2, &y2);

        dx = abs(x2 - x1);
        dy = abs(y2 - y1);

        sx = (x2 > x1) ? 1 : -1;
        sy = (y2 > y1) ? 1 : -1;

        x = x1;
        y = y1;

        putpixel(x, y, WHITE);

        /* Case 1: |slope| <= 1 */
        if (dx >= dy) {
            p = 2 * dy - dx;

            for (int i = 0; i < dx; i++) {
                x = x + sx;
                if (p < 0) {
                    p = p + 2 * dy;
                } else {
                    y = y + sy;
                    p = p + 2 * dy - 2 * dx;
                }
                putpixel(x, y, WHITE);
            }
        }

        /* Case 2: |slope| > 1 */
        else {
            p = 2 * dx - dy;

            for (int i = 0; i < dy; i++) {
                y = y + sy;
                if (p < 0) {
                    p = p + 2 * dx;
                } else {
                    x = x + sx;
                    p = p + 2 * dx - 2 * dy;
                }
                putpixel(x, y, WHITE);
            }
        }
    }
}
