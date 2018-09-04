//WAP to perform rotation of a triangle
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
double x1, y1, x2, y2, x3, y3, angle, nx1, nx2, nx3, ny1, ny2, ny3;
int gd= DETECT, gm;
initgraph(&gd, &gm, "C:/TurboC3/BGI");

printf("\n Enter the coordinates of first point: ");
scanf("%lf %lf", &x1, &y1);
printf("\n Enter the coordinates of second point: ");
scanf("%lf %lf", &x2, &y2);
printf("\n Enter the coordinates of third point: ");
scanf("%lf %lf", &x3, &y3);
printf("\n Enter the angle: ");
scanf("%lf", &angle);

angle=angle*3.14/180;

line(x1,y1,x2,y2);
line(x1,y1,x3,y3);
line(x3,y3,x2,y2);

nx1=x1*cos(angle) + y1*sin(angle);
ny1=x1*sin(angle) - y1*cos(angle);
nx2=x2*cos(angle) + y2*sin(angle);
ny2=x2*sin(angle) - y2*cos(angle);
nx3=x3*cos(angle) + y3*sin(angle);
ny3=x3*sin(angle) - y3*cos(angle);

setcolor(RED);
line(nx1,ny1,nx2,ny2);
line(nx1,ny1,nx3, ny3);
line(nx3,ny3,nx2,ny2);

getch();
}