#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int gd,gm,n,x[10],i,k=0;
	//window coordinates int wx1=220,wy1=140,wx2=420,wy2=140,wx3=420,wy3=340,wx4=220,wy4=340;
	int w[]={220,140,420,140,420,340,220,340,220,140};//array for drawing window
	detectgraph(&gd,&gm); 
	initgraph(&gd,&gm,"c:\\turboc3\\bgi"); //initializing graphics
	printf("Window:-");
	setcolor(RED); //red colored window
	drawpoly(5,w); //window drawn
	printf("Enter the no. of vertices of polygon: ");
	scanf("%d",&n);
	x[8]={50,200,100,300,300,300,50,200};
	setcolor(WHITE);
	drawpoly(n+1,x);
	printf("\nPress a button to clip a polygon..");
	getch();
	setcolor(RED);
	drawpoly(5,w);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(2,2,RED);
	gotoxy(1,1); //bringing cursor at starting position
 	printf("\nThis is the clipped polygon..");
 	getch();

 	cleardevice();
 	closegraph();
 	return 0;
}