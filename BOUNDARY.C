#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int ch=0;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:/TurboC3/BGI");

circle(200, 200, 50);
printf("\n Do you want to change boundary color? 0 or 1 \n");
scanf("%d", &ch);

if (ch==1)
{
setcolor(RED);
circle(200, 200, 50);
}
getch();
return 0;
}