#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
    {
	int gdriver = DETECT, gmode;
	clrscr();

	initgraph(&gdriver,&gmode,"C://TURBOc3/BGI");

	setbkcolor(15);

	setcolor(1);
	settextstyle(3,0,5);
	outtextxy(210,140,"G");

	setcolor(4);
	settextstyle(3,0,5);
	outtextxy(240,140,"O");

	setcolor(3);
	settextstyle(3,0,5);
	outtextxy(270,140,"O");

	setcolor(1);
	settextstyle(3,0,5);
	outtextxy(300,140,"G");

	setcolor(2);
	settextstyle(3,0,5);
	outtextxy(330,140,"L");

	setcolor(4);
	settextstyle(3,0,5);
	outtextxy(360,140,"E");

	//search bar
	rectangle(190,220,400,240);

	//button
	setcolor(4);
	settextstyle(1,0,2);
	outtextxy(250,250,"SEARCH");
	rectangle(240,250,330,280);

	getch();
	closegraph();

	}
