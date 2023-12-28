#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main()
{
  int a[4],b[4];//Out points for a and b ponits of line
  //Slope and new Co-ordinates
  float m,xnew,ynew;
  //Window Points and Line Point
  float xl=100,yl=100,xh=300,yh=300,xa=10,ya=200,xb=250,yb=150;
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(5);
  //Draw Line
  line(xa,ya,xb,yb);
  setcolor(12);
  //Draw Window
  rectangle(xl,yl,xh,yh);
  //Find Slope
  m = (yb-ya)/(xb-xa);

  //Set Outpoints for point A and B

  //For left
  if(xa < xl)
    a[3] = 1;
  else a[3] = 0;
 //For Right
  if(xa>xh)
   a[2] = 1;
  else a[2] = 0;
 //For Below
  if(ya < yl)
   a[1] = 1;
  else a[1] = 0;
 //For Above
  if (ya > yh)
   a[0] = 1;
   else a[0] = 0;
 //Simillarly repete for b point
  if(xb < xl)
    b[3] = 1;
  else b[3] = 0;

  if(xb>xh)
   b[2] = 1;
  else b[2] = 0;

  if(yb < yl)
   b[1] = 1;
  else b[1] = 0;

  if (yb > yh)
   b[0] = 1;
   else b[0] = 0;

  printf("press a key to continue");
  getch();

  //Check for no cliping
  if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && b[0] == 0 && b[1] == 0 && b[2] == 0 && b[3] == 0 )
  {

   printf("no clipping");
   line(xa,ya,xb,yb);
  }
  // Check for Discard the Line
  else if(a[0]&&b[0] || a[1]&&b[1] || a[2]&&b[2] || a[3]&&b[3])
  {clrscr();
   printf("line discarded");
   rectangle(xl,yl,xh,yh);
  }
  //Now how to clipped remaining portion
  else
  {
   if(a[3] == 1 && b[3]==0)
   {
   //Y co-ordinate
    ynew  = (m * (xl-xa)) + ya;
    //Set color to make  Invisible 1st line
    setcolor(0);
    line(xa,ya,xb,yb);
    setcolor(15);
    //New Clliped Line
    line(xl,ynew,xb,yb);
   }
   else if(a[2] == 1 && b[2] == 0)
   {
    ynew  = (m * (xh-xa)) + ya;
    setcolor(0);
    line(xa,ya,xb,yb);
    setcolor(15);
    line(xh,ynew,xb,yb);
   }
   else if(a[1] == 1 && b[1] == 0)
   {
    xnew = xa + (yl-ya)/m;
    setcolor(0);
    line(xa,ya,xb,yb);
    setcolor(15);
    line(xnew,yl,xb,yb);
   }

   else if(a[0] == 1 && b[0] == 0)
   {
    xnew = xa + (yh-ya)/m;
    setcolor(0);
    line(xa,ya,xb,yb);
    setcolor(15);
    line(xnew,yh,xb,yb);
   }
  }
  getch();
  closegraph();
}