#include<graphics.h>
#include<conio.h>
void main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, " ");
    printf("Enter values of x0 and y0: ");
    scanf("%d%d",&x0,&y0);
    printf("Enter point of x2 and y2: ");
    scanf("%d%d", &x1,&y1);
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
	   {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
	putpixel(x, y, WHITE);
	x += dx;
	y += dy;
	i+=1;
    }
    getch();
    closegraph();
}