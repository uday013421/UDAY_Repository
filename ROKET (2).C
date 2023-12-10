
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
int i,gd=DETECT,gm,x1,y1;
initgraph(&gd,&gm,"C:\\TURBOC 3\\BGI");

 cleardevice();

 printf("\n\n\n\n\n");
 printf("	W");delay(50);
 printf("E");delay(50);
 printf("L");delay(50);
 printf("C");delay(50);
 printf("O");delay(50);
 printf("M");delay(50);
 printf("E");delay(50);

 printf(" ");delay(50);
 printf("T");delay(50);
 printf("O");delay(50);
 printf(" ");delay(50);
 printf("T");delay(50);
 printf("H");delay(50);
 printf("E");delay(50);
 printf(" ");delay(50);
 printf("R");delay(50);
 printf("O");delay(50);
 printf("C");delay(50);
 printf("K");delay(50);
 printf("E");delay(50);
 printf("T");delay(50);
 printf(" ");delay(50);
 printf("L");delay(50);
 printf("A");delay(50);
 printf("U");delay(50);
 printf("N");delay(50);
 printf("C");delay(50);
 printf("H");delay(50);
 printf("I");delay(50);
 printf("N");delay(50);
 printf("G");delay(50);
 printf(" ");delay(50);
 printf("E");delay(50);
 printf("V");delay(50);
 printf("E");delay(50);
 printf("N");delay(50);
 printf("T");delay(50);
 printf(".");delay(50);

 printf("\n	T");delay(50);
 printf("H");delay(50);
 printf("E");delay(50);
 printf(" ");delay(50);
 printf("R");delay(50);
 printf("O");delay(50);
 printf("C");delay(50);
 printf("K");delay(50);
 printf("E");delay(50);
 printf("T");delay(50);
 printf(" ");delay(50);
 printf("'");delay(50);
 printf("L");delay(50);
 printf("M");delay(50);
 printf("V");delay(50);
 printf("3");delay(50);
 printf("'");delay(50);
 printf(" ");delay(50);
 printf("I");delay(50);
 printf("S");delay(50);
 printf(" ");delay(50);
 printf("R");delay(50);
 printf("E");delay(50);
 printf("A");delay(50);
 printf("D");delay(50);
 printf("Y");delay(50);
 printf(" ");delay(50);
 printf("T");delay(50);
 printf("O");delay(50);
 printf(" ");delay(50);
 printf("B");delay(50);
 printf("E");delay(50);
 printf(" ");delay(50);
 printf("L");delay(50);
 printf("A");delay(50);
 printf("U");delay(50);
 printf("N");delay(50);
 printf("C");delay(50);
 printf("H");delay(50);
 printf("E");delay(50);
 printf("D");delay(50);
 printf("!");delay(50);
 printf("\n	I");delay(50);
 printf("T");delay(50);
 printf(" ");delay(50);
 printf("W");delay(50);
 printf("I");delay(50);
 printf("L");delay(50);
 printf("L");delay(50);
 printf(" ");delay(50);
 printf("L");delay(50);
 printf("A");delay(50);
 printf("U");delay(50);
 printf("N");delay(50);
 printf("C");delay(50);
 printf("H");delay(50);
 printf(" ");delay(50);
 printf("I");delay(50);
 printf("N");delay(50);
 printf(" ");delay(50);
 printf("F");delay(50);
 printf("E");delay(50);
 printf("W");delay(50);
 printf(" ");delay(50);
 printf("S");delay(50);
 printf("E");delay(50);
 printf("C");delay(50);
 printf("O");delay(50);
 printf("N");delay(50);
 printf("D");delay(50);
 printf("S");delay(50);
 printf(".");delay(2000);
 cleardevice();

 x1=getmaxx()/2-30;
 y1=getmaxy()/2-80;
 gotoxy(x1,y1);
 settextstyle(1,0,10);
 outtextxy(x1-40,y1,"10");delay(1000);cleardevice();
 outtextxy(x1,y1,"9");delay(1000);cleardevice();
 outtextxy(x1,y1,"8");delay(1000);cleardevice();
 outtextxy(x1,y1,"7");delay(1000);cleardevice();
 outtextxy(x1,y1,"6");delay(1000);cleardevice();
 outtextxy(x1,y1,"5");delay(1000);cleardevice();
 outtextxy(x1,y1,"4");delay(1000);cleardevice();
 outtextxy(x1,y1,"3");delay(1000);cleardevice();
 outtextxy(x1,y1,"2");delay(1000);cleardevice();
 outtextxy(x1,y1,"1");delay(1000);cleardevice();
 outtextxy(x1,y1,"0");delay(1000);cleardevice();


for(i=1;i<=400;i=i+5)
{
 delay(100);
 cleardevice();

//rectangle(0,0+i,660,370+i); //Back;
//setfillstyle(1,9);
//floodfill(3,4+i,15);
//cente

setfillstyle(1,RED);
rectangle(350,150,390,160);
floodfill(351,152,15);


setfillstyle(1,15);
//rectangle(250,155,290,160);
rectangle(350,150,390,345);
floodfill(351,170,15);


setfillstyle(2,4);
line(380,345,390,370);
line(360,345,350,370);
line(350,370,390,370);
floodfill(379,346,15);



//circle(300,400,10);


//flage

setfillstyle(1,12);
rectangle(345,111,395,96);
floodfill(346,109,15);

setfillstyle(1,1);
circle(368,117,6.5);
floodfill(367,119,15);
setfillstyle(1,GREEN);
rectangle(345,123,395,138);
floodfill(346,125,15);
//center
//rectangle(250,155,290,160);

//Head
setfillstyle(1,15);
line(350,150,340,140);//
line(390,150,400,140); //
line(340,140,340,100);
line(400,140,400,100);
line(340,100,350,70);
line(400,100,390,70);
arc(370,70,0,180,20);
floodfill(353,148,15);


//arrow dinamic
setfillstyle(1,12);
line(305,180,316,150); //left fule tank
line(335,180,323,150);
line(305,180,335,180);
arc(320,150,0,180,3);
floodfill(307,178,15);

setfillstyle(1,15);
rectangle(305,180,335,344);
floodfill(306,182,15);

setfillstyle(2,4);
line(305,344,295,365); //left thruster
line(335,344,345,365);
line(295,365,345,365);
floodfill(307,345,15);

setfillstyle(1,RED);

rectangle(335,230,350,250);
floodfill(336,231,15);



//flame
setfillstyle(1,14);
line(295,365,295,390);
line(345,365,345,390);
line(295,390,305,380);
line(345,390,335,380);
line(305,380,305,410);
line(335,380,335,410);
line(305,410,313,400);
line(335,410,327,400);
line(313,400,320,430);
line(327,400,320,430);
floodfill(296,366,15);

setfillstyle(1,12);
line(405,180,416,150);
line(435,180,423,150);
line(405,180,435,180);
arc(420,150,0,180,3);
floodfill(407,178,15);

setfillstyle(1,15);
rectangle(405,180,435,344);//right fule tank
floodfill(406,182,15);

setfillstyle(1,RED);

rectangle(390,230,435,250);
floodfill(392,231,15);

setfillstyle(2,4);
line(405,344,395,365);  //right thruster
line(435,344,445,365);
line(395,365,445,365);
floodfill(407,345,15);
//flame
setfillstyle(1,14);
line(395,365,395,390);
line(445,365,445,390);
line(395,390,405,380);
line(445,390,435,380);
line(405,380,405,410);
line(435,380,435,410);
line(405,410,413,400);
line(435,410

,427,400);
line(413,400,420,430);
line(427,400,420,430);
floodfill(396,366,15);
//sun
setfillstyle(1,14);
circle(50,70+i,30);
floodfill(52,72+i,15);
//#Antena
setfillstyle(1,RED);
circle(68,153+i,3);
floodfill(69,154+i,15);

setfillstyle(1,RED);
arc(58,168+i,160,300,30) ;
line(29,159+i,72,195+i);
floodfill(32,163+i,15);


setfillstyle(1,RED);
line(48,173+i,65,156+i);
line(56,180+i,65,156+i);
line(48,173+i,56,180+i);
floodfill(56,175+i,15);

setfillstyle(1,RED);

line(39,204+i,39,194+i);

line(44,204+i,44,196+i);
line(39,194+i,44,196+i);
line(39,204+i,44,204+i);
floodfill(40,195+i,15);



line(33,208.5+i,52,208.5+i);//Neck
line(33,204+i,52,204+i);
line(33,204+i,33,208.5+i);
line(52,204+i,52,208.5+i);
floodfill(34,207+i,15);
setfillstyle(1,RED);
line(33,210+i,20,270+i);//left rod
line(33,210+i,36,210+i);
line(36,210+i,23,270+i);
line(20,270+i,23,270+i);
floodfill(21,268+i,15);

setfillstyle(1,RED);
line(52,210+i,60,270+i); //rightrod()
line(49,210+i,57,270+i);
line(49,210+i,52,210+i);
line(57,270+i,60,270+i);
floodfill(50,211+i,15);



//#building
setfillstyle(6,9);
rectangle(5,280+i,40,310+i); //left window
floodfill(6,282+i,15);
rectangle(58,280+i,95,310+i);//right window
floodfill(60,282+i,15);
setfillstyle(SOLID_FILL,RED);//door
rectangle(39,330+i,60,370+i);
floodfill(40,332+i,15);


setfillstyle(1,7);
rectangle(-2,270+i,100,370+i);
floodfill(1,271+i,15);



rectangle(-1,-400+i,660,0+i);
setfillstyle(1,1);
floodfill(3,-399+i,15);


rectangle(-2,0+i,660,370+i); //Back;
setfillstyle(1,9);
floodfill(3,4+i,15);

rectangle(0,370+i,700,370+i);
setfillstyle(1,2);
floodfill(5,392+i,15);

//rectangle(0,-800+i,700,-400+i);
//setfillstyle(1,8);
//floodfill(5,-799+i,15);

//rectangle(50,200,150,350);
}

for(i=0;i<=400;i=i+10)
{
   delay(100);
   cleardevice();


setfillstyle(1,RED);
rectangle(350,150,390,160);
floodfill(351,152,15);


setfillstyle(1,15);
//rectangle(250,155,290,160);
rectangle(350,150,390,345);
floodfill(351,170,15);


setfillstyle(2,4);
line(380,345,390,370);
line(360,345,350,370);
line(350,370,390,370);
floodfill(379,346,15);

setfillstyle(1,14);
line(390,370,390,390);
line(390,390,381,380);
line(350,370,350,390);
line(350,390,359,380);
line(359,380,359,410);
line(381,380,381,410);
line(381,410,375,400);
line(359,410,365,400);
line(375,400,370,430);
line(365,400,370,430);
floodfill(389,371,15);

//circle(300,400,10);


//flage

setfillstyle(1,12);
rectangle(345,111,395,96);
floodfill(346,109,15);

setfillstyle(1,1);
circle(368,117,6.5);
floodfill(367,119,15);
setfillstyle(1,GREEN);
rectangle(345,123,395,138);
floodfill(346,125,15);
//center
//rectangle(250,155,290,160);

//Head
setfillstyle(1,15);
line(350,150,340,140);//
line(390,150,400,140); //
line(340,140,340,100);
line(400,140,400,100);
line(340,100,350,70);
line(400,100,390,70);
arc(370,70,0,180,20);
floodfill(353,148,15);


//arrow dinamic
setfillstyle(1,12);
line(305,180+i,316,150+i); //left fule tank
line(335,180+i,323,150+i);
line(305,180+i,335,180+i);
arc(320,150+i,0,180,3);
floodfill(307,178+i,15);

setfillstyle(1,15);
rectangle(305,180+i,335,344+i);
floodfill(306,182+i,15);

setfillstyle(2,4);
line(305,344+i,295,365+i); //left thruster
line(335,344+i,345,365+i);
line(295,365+i,345,365+i);
floodfill(307,345+i,15);

setfillstyle(1,12);
line(405,180+i,416,150+i);
line(435,180+i,423,150+i);
line(405,180+i,435,180+i);
arc(420,150+i,0,180,3);
floodfill(407,178+i,15);

setfillstyle(1,15);
rectangle(405,180+i,435,344+i);//right fule tank
floodfill(406,182+i,15);

setfillstyle(2,4);
line(405,344+i,395,365+i);  //right thruster
line(435,344+i,445,365+i);
line(395,365+i,445,365+i);
floodfill(407,345+i,15);
    setfillstyle(1,1);
   line (-1,-5+i,700,-5+i);
   floodfill(2,3+i,15);

      setfillstyle(1,9);
    line(-1,400+i,700,400+i);
    floodfill(2,402+i,15);

}

circle(550,50,50);//moon
setfillstyle(1,8);
floodfill(552,52,15);

for(i=0;i<=400;i=i+10)
{//cente
delay(100);
cleardevice();


//circle(550,50,50);//moon
//setfillstyle(1,8);
//floodfill(552,52,15);

setfillstyle(1,RED);
rectangle(350,150+i,390,160+i);
floodfill(351,152+i,15);


setfillstyle(1,15);
//rectangle(250,155,290,160);
rectangle(350,150+i,390,345+i);
floodfill(351,170+i,15);


setfillstyle(2,4);
line(380,345+i,390,370+i);
line(360,345+i,350,370+i);
line(350,370+i,390,370+i);
floodfill(379,346+i,15);


//circle(300,400,10);


//flage

setfillstyle(1,12);
rectangle(345,111,395,96);
floodfill(346,109,15);

setfillstyle(1,1);
circle(368,117,6.5);
floodfill(367,119,15);
setfillstyle(1,GREEN);
rectangle(345,123,395,138);
floodfill(346,125,15);
//center
//rectangle(250,155,290,160);

//Head
setfillstyle(1,15);
line(350,150,340,140);//
line(390,150,400,140); //
line(340,140,340,100);
line(400,140,400,100);
line(340,100,350,70);
line(400,100,390,70);
arc(370,70,0,180,20);
line(350,150,390,150);

floodfill(353,148,15);

setfillstyle(1,1);
arc(300,630,30,150,300);
line(40,477,560,477);
floodfill(45,476,15);
}


for(i=0;i<=400;i=i+10)
{
  delay(100);
  cleardevice();



//flage

setfillstyle(1,12);
rectangle(345,111,395,96);
floodfill(346,109,15);

setfillstyle(1,1);
circle(368,117,6.5);
floodfill(367,119,15);
setfillstyle(1,GREEN);
rectangle(345,123,395,138);
floodfill(346,125,15);
//center
//rectangle(250,155,290,160);

//Head
setfillstyle(1,15);
line(350,150,340,140);//
line(390,150,400,140); //
line(340,140,340,100);
line(400,140,400,100);
line(340,100,350,70);
line(400,100,390,70);
arc(370,70,0,180,20);
line(350,150,390,150);
floodfill(353,148,15);
setfillstyle(2,4);
line(365,150,355,170);
line(375,150,385,170);
line(355,170,385,170);
line(365,150,375,150);
floodfill(367,169,15);

setfillstyle(1,14);
line(355,170,355,190);
line(385,170,385,190);
line(355,190,363,180);
line(385,190,377,180);
line(363,180,363,200);
line(377,180,377,200);
line(363,200,367,193);
line(377,200,374,193);
line(367,193,370,210);
line(374,193,370,210);
floodfill(356,172,15);


setfillstyle(1,1);
arc(300,630+i,30,150,300);
line(40,477+i,560,477+i);
floodfill(45,476+i,15);


circle(550,-300+i,50);//moon
setfillstyle(1,8);
floodfill(552,-301+i,15);


}



for(i=0;i<=400;i=i+10)
{
  delay(100);
  cleardevice();

  //flage

setfillstyle(1,12);
rectangle(345-i,111+i,395-i,96+i);
floodfill(346-i,109+i,15);

setfillstyle(1,1);
circle(368-i,117+i,6.5);
floodfill(367-i,119+i,15);
setfillstyle(1,GREEN);
rectangle(345-i,123+i,395-i,138+i);
floodfill(346-i,125+i,15);
//center
//rectangle(250,155,290,160);

//Head
setfillstyle(1,15);
line(350-i,150+i,340-i,140+i);//
line(390-i,150+i,400-i,140+i); //
line(340-i,140+i,340-i,100+i);
line(400-i,140+i,400-i,100+i);
line(340-i,100+i,350-i,70+i);
line(400-i,100+i,390-i,70+i);
arc(370-i,70+i,0,180,20);
line(350-i,150+i,390-i,150+i);

floodfill(353-i,148+i,15);


//fllage()
setfillstyle(1,12);
rectangle(370,102,398,110);
floodfill(371,103,15);
setfillstyle(1, GREEN);
rectangle(370,116,398,124);
floodfill(371,117,15);
setfillstyle(1, BLUE);
circle(384,113,3);
floodfill(385,114,15);

rectangle(345,110,360,125);
line(345,115,360,115);

line(345,120,360,120);


//setelite
setfillstyle(1,RED);
circle(350,138,2);
floodfill(351,139,15);
setfillstyle(1, GREEN);
circle(370,138,2);
floodfill(371,139,15),
setfillstyle(1,BLUE);
circle(360,138,2);
floodfill(361,139,15);
setfillstyle(1,15);
rectangle(340,100,400,140);//body
floodfill(341,102,15);
//circle(360,138,2);
line(340,140,330,170);//left leg
line(400,140,410,170);//right leg
//line(340,120,320,100);
//line(347,50,290,150);
//line(347,50,330,40);
//line(330,40,270,134);
//line(270,134,290,149);
//line(340,45,280,140);

circle(550,50,50);//moon
setfillstyle(1,8);
floodfill(552,52,15);
}
 for(i=0;i<=1;i=i+10)
  {
  delay(100);
    cleardevice();

circle(550,50,50);//moon
setfillstyle(1,8);
floodfill(552,52,15);
//fllage()
setfillstyle(1,12);
rectangle(370,102,398,110);
floodfill(371,103,15);
setfillstyle(1, GREEN);
rectangle(370,116,398,124);
floodfill(371,117,15);
setfillstyle(1, BLUE);
circle(384,113,3);
floodfill(385,114,15);

rectangle(345,110,360,125);
line(345,115,360,115);

line(345,120,360,120);


//setelite
setfillstyle(1,RED);
circle(350,138,2);
floodfill(351,139,15);
setfillstyle(1, GREEN);
circle(370,138,2);
floodfill(371,139,15),
setfillstyle(1,BLUE);
circle(360,138,2);
floodfill(361,139,15);
setfillstyle(1,15);
rectangle(340,100,400,140);//body
floodfill(341,102,15);
//circle(360,138,2);
line(340,140,330,170);//left leg
line(400,140,410,170);//right leg
line(340,120,320,100);delay(1000);
line(347,50,290,150);delay(1000);
line(347,50,330,40); delay(1000);
line(330,40,270,134);delay(1000);
line(270,134,290,149);delay(1000);
line(340,45,280,140);delay(1000);
line(400,100,400,70);delay(1000);
setfillstyle(1,RED);
circle(400,65,4);delay(1000);
floodfill(402,66,15);
}

//MARS should be added!!
 for(i=0;i<=100;i=i+10)
  {
  delay(1000);
    cleardevice();

//fllage()

setfillstyle(1,12);
rectangle(170+i,202-i,198+i,210-i);
floodfill(171+i,203-i,15);
setfillstyle(1, GREEN);
rectangle(170+i,216-i,198+i,224-i);
floodfill(171+i,217-i,15);
setfillstyle(1, BLUE);
circle(184+i,213-i,3);
floodfill(185+i,214-i,15);

rectangle(145+i,210-i,160+i,225-i);
line(145+i,215-i,160+i,215-i);

line(145+i,220-i,160+i,220-i);


//setelite
setfillstyle(1,RED);
circle(150+i,238-i,2);
floodfill(151+i,239-i,15);
setfillstyle(1, GREEN);
circle(170+i,238-i,2);
floodfill(171+i,239-i,15);
setfillstyle(1,BLUE);
circle(160+i,238-i,2);
floodfill(161+i,239-i,15);

setfillstyle(1,15);
rectangle(140+i,200-i,200+i,240-i);//body
floodfill(141+i,202-i,15);
//circle(360,138,2);

line(140+i,240-i,130+i,270-i);//left leg
line(200+i,240-i,210+i,270-i);//right leg

line(140+i,220-i,120+i,200-i);

line(147+i,150-i,90+i,250-i);

line(147+i,150-i,130+i,140-i);

line(130+i,140-i,70+i,234-i);

line(70+i,234-i,90+i,249-i);

line(140+i,145-i,80+i,240-i);

line(200+i,200-i,200+i,170-i);
setfillstyle(1,RED);
circle(200+i,165-i,4);

floodfill(202+i,166-i,15);
setfillstyle(1,BLUE);
circle(50,400,50);
floodfill(51,402,15);

setfillstyle(1,8);
arc(600,100,140,300,150);
line(485,5,700,5);
floodfill(601,102,15);
}
for(i=0;i<=180;i=i+10)
{
 delay(1000);
    cleardevice();
    setfillstyle(1,1);
    circle(500,50,40);
     floodfill(501,51,15);
  //fllage()
setfillstyle(1,12);
rectangle(270,102+i,298,110+i);
floodfill(271,103+i,15);
setfillstyle(1, GREEN);
rectangle(270,116+i,298,124+i);
floodfill(271,117+i,15);
setfillstyle(1, BLUE);
circle(284,113+i,3);

floodfill(285,114+i,15);

rectangle(245,110+i,260,125+i);
line(245,115+i,260,115+i);

line(245,120+i,260,120+i);


//setelite
setfillstyle(1,RED);
circle(250,138+i,2);
floodfill(251,139+i,15);
setfillstyle(1, GREEN);
circle(270,138+i,2);
floodfill(271,139+i,15),
setfillstyle(1,BLUE);
circle(260,138+i,2);
floodfill(261,139+i,15);
setfillstyle(1,15);
rectangle(240,100+i,300,140+i);//body

floodfill(241,102+i,15);
//circle(360,138,2);
line(240,140+i,230,170+i);//left leg
line(300,140+i,310,170+i);//right leg
line(240,120+i,220,100+i);
line(247,50+i,190,150+i);
line(247,50+i,230,40+i);
line(230,40+i,170,134+i);
line(170,134+i,190,149+i);
line(240,45+i,180,140+i);
line(300,100+i,300,70+i);
setfillstyle(1,RED);
circle(300,65+i,4);
floodfill(302,66+i,15);


setfillstyle(1,12);
circle(308,50,4);
floodfill(309,50,15);

setfillstyle(1,14);
circle(100,100,20);
floodfill(101,101,15);
  setfillstyle(1,8);
  line(-1,350,700,350);
  floodfill(2,351,15);

}
settextstyle(3,0,4);
 outtextxy(100,110,"Landed on the surface of moon"); delay(1000);
 outtextxy(180,160,"!!khushiya manav!!"); delay(1000);



getch();
closegraph();

return 0;
}
