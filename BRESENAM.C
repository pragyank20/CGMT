#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main(){
int gd=DETECT ,gm;
int x,y, x1,i,x2,y1,y2,dx,dy,p;
initgraph(&gd , &gm , "C:\\TurboC3\\bgi");
x1=200;
x2=155;
y1=150;
y2=200;
x=x1;
y=y1;

dx=x2-x1;
dy=y2-y1;

p=2*dy-dx;
while(x<x2){
if(p<0){
p=p+2*dy;
x=x+1;
//y=y+1;
}
else{
p=p+2*dy-2*dx;
x=x+1;
y=y+1;
}
putpixel(x,y,RED);
}
getch();
closegraph();
}