#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

int main(){
    int gd=DETECT,gm;
    float m;
    initgraph(&gd, &gm, "");
    int x,y,x1,y1,x2,y2,p,dx,dy,sx,sy;
    while(1){
        printf("Enter first coordinate: ");
        scanf("%d%d",&x1,&y1);
        if(x1==-1){
            closegraph();
            return 0;
        }
        printf("Enter second coordinate: ");
        scanf("%d%d",&x2,&y2);
        x=x1;
        y=y1;
        dx=abs(x2-x1);
        dy=abs(y2-y1);
        sx = (x2>x1)?1:-1;
        sy = (y2>y1)?1:-1;
        putpixel(x,y,7);
        if(dx>=dy){
            p=2*dy-dx;
            for(int i=0;i<dx;i++){
                if(p<0){
                    x=x+sx;
                    p=p+2*dy;
                }
                else{
                    x=x+sx;
                    y=y+sy;
                    p=p+2*dy-2*dx;
                }
                putpixel(x,y,7);
            }
        }
        else{
            p=2*dx-dy;
            for(int i=0;i<dy;i++){
                if(p<0){
                    y=y+sy;
                    p=p+2*dx;
                }
                else{
                    x=x+sx;
                    y=y+sy;
                    p=p+2*dx-2*dy;
                }
                putpixel(x,y,7);
            }
        }
    }
    getch();
    closegraph();
    return 0;
}