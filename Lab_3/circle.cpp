#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw_circle(int,int,int);
void symmetry(int,int,int,int);
int main()
{
    int xc,yc,R;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    printf("Enter the center of the circle:\n");
    printf("Xc =");
    scanf("%d",&xc);
    printf("Yc =");
    scanf("%d",&yc);
    outtextxy(xc-25,yc,"Birendra");
        printf("Enter the radius of the circle :");
        scanf("%d",&R);
        draw_circle(xc,yc,R);
        getch();
    
}

void draw_circle(int xc,int yc,int rad){
    if(rad<=70){
        return;
    }
    int x = 0;
    int y= rad;
    int p = 1-rad;
    symmetry(x,y,xc,yc);
    for(x=0;y>x;x++){
        if(p<0)
            p = p + 2*x + 3;
        else{
            p = p + 2*(x-y) + 5;
            y--;
        }
        symmetry(x,y,xc,yc);
        delay(0.1);
    }
    draw_circle(xc,yc,rad-1);
}
void symmetry(int x,int y,int xc,int yc)
{
    putpixel(xc+x,yc-y,WHITE); //For pixel (x,y)
    putpixel(xc+y,yc-x,RED); //For pixel (y,x)
    putpixel(xc+y,yc+x, WHITE); //For pixel (y,-x)
    putpixel(xc+x,yc+y, GREEN); //For pixel (x,-y)
    putpixel(xc-x,yc+y, WHITE); //For pixel (-x,-y)
    putpixel(xc-y,yc+x, RED); //For pixel (-y,-x)
    putpixel(xc-y,yc-x, WHITE); //For pixel (-y,x)
    putpixel(xc-x,yc-y, GREEN); //For pixel (-x,y)
}