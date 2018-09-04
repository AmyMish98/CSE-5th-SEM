//WAP to perform translation of a line
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int x1, y1, x2, y2, tx, ty;
int gd= DETECT, gm;
initgraph(&gd, &gm, "C:/TurboC3/BGI");

printf("\n Enter the coordinates of first point: ");
scanf("%d %d", &x1, &y1);
printf("\n Enter the coordinates of second point: ");
scanf("%d %d", &x2, &y2);
printf("\n Enter the translating factor for x and y direction: ");
scanf("%d %d", &tx, &ty);

line(x1, y1, x2, y2);

x1=x1+tx;
x2=x2+tx;
y1=y1+ty;
y2=y2+ty;

setcolor(RED);

line(x1, y1, x2, y2);

getch();
}