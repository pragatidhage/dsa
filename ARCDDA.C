#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float minimum(float, float);
void main()
{
int gd = DETECT, gm;
int x0, y0;
float angle, theta, x, y, d0;

initgraph(&gd, &gm, "C:\\TURBOC3\\bgi");

// Step one read x0 and y0
printf("Enter x0 and y0: ");
scanf("%d %d", &x0, &y0);

// Step two read arc angle theta
printf("Enter angle of arc: ");
scanf("%f", &theta);

//Step three read starting points x, y
printf("Enter x and y: ");
scanf("%f %f", &x, &y);

// Step four final calculations and drawing arc

d0 = minimum(0.01, 1/(3.2*(abs(x-x0) + abs(y-y0))));

line(x0, y0, (int)x, (int)y);
angle = 0.0;
while((angle*100)<theta)
{
putpixel(x, y, RED);
x = x - (y-y0)*d0;
y = y + (x-x0)*d0;
angle = angle+d0;
}
line(x0, y0, (int)x, (int)y);
getch();
}

float minimum(float a, float b)
{
return a < b ? a : b;
}