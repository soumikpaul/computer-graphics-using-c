#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    circle(200,200,20);
    outtextxy(100,100,"C Graphics");
    delay(5000);
    closegraph();
    return 0;
}
