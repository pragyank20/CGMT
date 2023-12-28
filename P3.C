#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
int x,y,x1,y1,p,r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter radius:");
scanf("%d",&r);
x1=0;
y1=r;
p=1-r;
while(x1<y1){
if(p<0){
p=p+2*x1+3;
x1=x1+1;
}
else{
p=p+2*x1-2*y1+5;
x1=x1+1;
y1=y1-1;
}
putpixel(200+x1,200+y1,RED);
putpixel(200+y1,200+x1,RED);
putpixel(200+x1,200-y1,RED);
putpixel(200+y1,200-x1,RED);
putpixel(200-x1,200+y1,RED);
putpixel(200-y1,200+x1,RED);
putpixel(200-x1,200-y1,RED);
putpixel(200-y1,200-x1,RED);
}
getch();
closegraph();
}