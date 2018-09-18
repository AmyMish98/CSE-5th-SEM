#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int x, y, in, fi, i=0;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:/TC/BGI");
printf("\n Enter the coordinates of center: ");
scanf("%d %d",&x,&y);
printf("\n Enter the initial and final arc radius: ");
scanf("%d %d", &in, &fi);

clrscr();
for (i=in;i<=fi;i++)
{
setcolor(i%4);
arc(x,y,0, 180, i);
delay(1000);
}
getch();
}