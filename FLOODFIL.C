#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int xc, yc, r;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:/TurboC3/BGI");

printf("\n Enter the co-ordinates of the center and radius: ");
scanf("%d %d %d", &xc, &yc, &r);

circle(xc, yc, r);
floodfill(xc, yc, r);

getch();
return 0;
}