#include <stdio.h>
#include<X11/Xlib.h>
#include <graphics.h>
//#include <conio.h>
int main()
{
    //XInitThreads();
    int d,r,x,y,xc,yc;
    printf("Enter radius");
    scanf("%d",&r);
    printf("Enter center");
    scanf("%d %d",&xc, &yc);
    
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    
    d=3-2*r;
    x=0;
    y=r;
    while(x<=y)
    {
        putpixel(x+xc,y+yc,5);
        putpixel(xc-y,yc-x,5);
        putpixel(y+xc,yc-x,5);
        putpixel(xc-y,x+yc,5);
        putpixel(y+xc,x+yc,5);
        putpixel(xc-x,yc-y,5);
        putpixel(x+xc,yc-y,5);
        putpixel(xc-x,y+yc,5);
        if(d<=0)
        {
            d=d+4*x+6;
        }
        else
        {
            d=d+4*x-4*y+10;
            y=y-1;
        }
        x=x+1;
    }
    //delay(100000);
    getch();
}
