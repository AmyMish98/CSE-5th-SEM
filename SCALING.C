//WAP to perform scaling of a line
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int x1, y1, x2, y2, sx, sy;
int gd= DETECT, gm;
initgraph(&gd, &gm, "C:/TurboC3/BGI");

printf("\n Enter the coordinates of first point: ");
scanf("%d %d", &x1, &y1);
printf("\n Enter the coordinates of second point: ");
scanf("%d %d", &x2, &y2);
printf("\n Enter the scaling factor for x and y direction: ");
scanf("%d %d", &sx, &sy);

line(x1, y1, x2, y2);

x1=x1*sx;
x2=x2*sx;
y1=y1*sy;
y2=y2*sy;

setcolor(RED);

line(x1, y1, x2, y2);

getch();
}