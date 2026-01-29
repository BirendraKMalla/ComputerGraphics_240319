#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void disp();
void translation_display();

float x, y;
int xc, yc;
int t_xc, t_yc;

int main()
{
    int gd = DETECT, gm;
    int rx, ry;
    float p1, p2;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter the center point (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter Rx and Ry: ");
    scanf("%d %d", &rx, &ry);

    printf("\nEnter the translation point");
    scanf("%d%d",&t_xc,&t_yc);

    x = 0;
    y = ry;

    disp();

    /* -------- REGION 1 -------- */
    p1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);

    while ((2 * ry * ry * x) <= (2 * rx * rx * y))
    {
        x++;

        if (p1 < 0)
        {
            p1 = p1 + (2 * ry * ry * x) + (ry * ry);
        }
        else
        {
            y--;
            p1 = p1 + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }

        disp();
        translation_display();
    }

    /* -------- REGION 2 -------- */
    p2 = (ry * ry) * (x + 0.5) * (x + 0.5) +
         (rx * rx) * (y - 1) * (y - 1) -
         (rx * rx * ry * ry);

    while (y > 0)
    {
        y--;

        if (p2 > 0)
        {
            p2 = p2 - (2 * rx * rx * y) + (rx * rx);
        }
        else
        {
            x++;
            p2 = p2 + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }

        disp();
        translation_display();
    }

    getch();
    closegraph();
    return 0;
}

void disp()
{
    putpixel(xc + x, yc + y, 5);
    putpixel(xc - x, yc + y, 5);
    putpixel(xc + x, yc - y, 5);
    putpixel(xc - x, yc - y, 5);
}

void translation_display(){
    putpixel(xc + x + t_xc, yc + y + t_yc, 10);
    putpixel(xc - x  + t_xc, yc + y + t_yc, 10);
    putpixel(xc + x + t_xc, yc - y + t_yc, 10);
    putpixel(xc - x + t_xc, yc - y + t_yc, 10);
}