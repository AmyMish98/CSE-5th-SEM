#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int x1,y1,x2,y2,x3,y3,x4,y4,k;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:/TC/BGI");
printf("\n Enter the coordinates of the rectangle");
scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);

printf("\n Enter the shearing factor: ");
scanf("%d", &k);

x1=x1*k;
x2=x2*k;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);

getch();
}