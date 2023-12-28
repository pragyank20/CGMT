#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main(){
int gd=DETECT ,gm;
int x1,i,x2,y1,y2,dx,dy,xx,yy,steps;
initgraph(&gd , &gm , "c:\\TurboC3\\bgi");
x1=200;
x2=155;
y1=150;
y2=200;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy)){
steps=abs(dx);
}
else{
steps=abs(dy);
}
xx=dx/steps;
yy=dy/steps;
for(i=0;i<steps;i++){
putpixel(x1,y1,GREEN);
x1=x1+xx;
y1=y1+yy;
}
getch();
closegraph();
}