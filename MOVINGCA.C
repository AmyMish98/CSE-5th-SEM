#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int t1=100,b1=200,l1=100,r1=150,t2=200,b2=250,l2=100,r2=200;
int x1=120, y1=260, x2=180, y2=260, rad1=10, rad2=10;
int i=0;
int gd= DETECT, gm;
initgraph(&gd, &gm, "C:/TC/BGI");

for (i=0;i<15;i++)
{
clrscr();
rectangle(l1, t1, r1, b1);
rectangle(l2, t2, r2, b2);
circle(x1,y1,rad1);
circle(x2,y2,rad2);
l1+=15;
l2+=15;
x1+=15;
x2+=15;
r1+=15;
r2+=15;
delay(1000);
}
getch();
}