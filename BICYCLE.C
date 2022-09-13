#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

int main()
      {
	int gdriver = DETECT, gmode, i, a;

     int k=0;


	printf("Enter delay(int only): ");
	scanf("%d",&k);



	// Path of the program
	initgraph(&gdriver, &gmode, "C://TURBOC3/BGI");



	// Move the cycle
	for (i = 0; i < 600; i++) {
		//bottom rod
		line(50 + i, 405, 100 + i, 405);

		//top-rod
		line(75 + i, 375, 125 + i, 375);

		//left-rod
		line(50 + i, 405, 75 + i, 375);

		//right-rod
		line(100 + i, 405, 130 + i, 372);

		//handle line
		line(150 + i, 410, 115 + i, 345);

		//seat-bottom-rod
		line(75 + i, 365, 75 + i, 375);

		//seat
		line(70 + i, 365, 80 + i, 365);

		//handle-front
		line(105 + i, 345, 120 + i, 345);

		// Wheels
		circle(150 + i, 405, 30);  //front
		circle(50 + i, 405, 30);   //rear

		// Road
		line(0, 436, getmaxx(), 436);

		// Sun
		circle(getmaxx() - i,100, 20);

		//aeroplane
	      //	rectangle(140+i,120,200+i,140);
	      //	ellipse(200+i,130,270,90,12,12);
	      //	line(210+i,128,220+i,128);


		// Stop the screen for k sec
		delay(5);

		// Clear the screen
		cleardevice();
	}

	getch();
	closegraph();
     }
