#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int gd=0,gm;
    int count=50;
    clrscr();
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");
    while(count--)
    {
        sound(10*random(100));
        delay(75);
        nosound();
        outtextxy(10,10,"The image of the robot is loading......");
        
    }
    

    
    setfillstyle(SOLID_FILL,CYAN);
    bar(180,80,300,150);                //face

    setfillstyle(SOLID_FILL,YELLOW);
    circle(215,105,9);                //eye
    floodfill(215,110,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    circle(260,105,9);                //eye
    floodfill(260,110,WHITE);

    setfillstyle(SOLID_FILL,BLACK);
    circle(215,105,4);                //smalleye
    floodfill(215,105,WHITE);

    setfillstyle(SOLID_FILL,BLACK);
    circle(260,105,4);                //smalleye
    floodfill(260,105,WHITE);

    setfillstyle(SOLID_FILL,BLACK);
    bar(208,125,269,140);             //mouth

    setfillstyle(SOLID_FILL,RED);
    bar(174,100,180,130);              //ear
    bar(300,100,306,130);              //ear

    arc(237,80,0,180,13);
    line(233,66,233,40);
    line(239,66,239,40);             //head
    setfillstyle(SOLID_FILL,RED);
    circle(236,30,10);  
    floodfill(236,30,WHITE);

    ellipse(236,154,0,360,17,3);   //garden
    ellipse(236,160,0,360,17,3);  
    setfillstyle(SOLID_FILL,CYAN);
    bar(160,163,325,290);

    line(125,163,360,163);    //mid area
    line(125,163,125,230);
    line(360,163,360,230);
    line(125,230,160,290);
    line(360,230,325,290);
    line(160,290,325,290);
    setfillstyle(SOLID_FILL,BLUE);
    bar(135,175,260,225);
    setfillstyle(SOLID_FILL,GREEN);
    bar(145,185,200,215);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(220,190,255,210);
    setfillstyle(SOLID_FILL,RED);
    circle(305,185,10);
    floodfill(305,185,WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    circle(305,215,10);
    floodfill(305,215,WHITE);
    line(150,235,175,275);
    line(175,235,200,275);
    line(200,235,225,275);
    line(235,235,235,275);
    line(335,235,310,275);
    line(310,235,285,275);
    line(285,235,260,275);

    setfillstyle(SOLID_FILL,CYAN);
    bar(170,290,190,380);   //legs
    bar(295,290,315,380);
    setfillstyle(SOLID_FILL,RED);
    bar(160,380,200,400);   //finger
    bar(280,380,325,400);

    rectangle(120,170,125,200) ; //left hand
    setfillstyle(SOLID_FILL,RED);
    bar(87,165,120,205);
    setfillstyle(SOLID_FILL,CYAN);
    bar(97,205,110,253);
    arc(103,273,330,210,20);
    arc(103,273,340,200,10);

    rectangle(360,170,365,200) ; //right hand
    setfillstyle(SOLID_FILL,RED);
    bar(365,165,398,205);
    setfillstyle(SOLID_FILL,CYAN);
    bar(375,205,388,253);
    arc(381,273,330,210,20);
    arc(381,273,340,200,10); 
    getch();

}
