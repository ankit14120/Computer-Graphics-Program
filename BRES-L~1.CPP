#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include <math.h>
void EightSectorPlot(int xc,int yc,int x,int y)
       {
	putpixel(x+xc,y+yc,RED);
	putpixel(x+xc,-y+yc,YELLOW);
	putpixel(-x+xc,-y+yc,GREEN);
	putpixel(-x+xc,y+yc,YELLOW);
	putpixel(y+xc,x+yc,12);
	putpixel(y+xc,-x+yc,14);
	putpixel(-y+xc,-x+yc,15);
	putpixel(-y+xc,x+yc,6);
       }

	void BCir(int xc,int yc,int r)
       {
	int x=0,y=r,d=3-(2*r);
	EightSectorPlot(xc,yc,x,y);

	while(x<=y)
	 {
	  if(d<=0)
		 {
	    d=d+(4*x)+6;
	  }
	 else
	  {
	    d=d+(4*x)-(4*y)+10;
	    y=y-1;
	  }
	   x=x+1;
	   EightSectorPlot(xc,yc,x,y);
	  }delay(50);
	}

	int  main(void)
       {
	/* request auto detection */
	int xc,yc,r,gd = DETECT, gm;
	/* initialize graphics and local variables */
	 initgraph(&gd, &gm," ");
	 printf("Enter the values of xc and yc :");
	 scanf("%d%d",&xc,&yc);
	 printf("Enter the value of radius  :");
	 scanf("%d",&r);
	 BCir(xc,yc,r);

	 getch();
	 closegraph();
	 return 0;
	}