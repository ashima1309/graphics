#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

  //------------Prototypes--------------
  void draw(int i);
  void expression(int i);
  void legs(int i);
  void goog();
  void bg();
  void kettle();
  void eyes();
  void hands1();
  void hands2();
  void m1(); //mouth
  void m2();
  void m3();
  void blush();
  void blush2();
  void eb();
  void eb2();
  void fl1();
  void fl2();
  void redkettle();
  void h1(int i);
  void expression1(int i);
  void lefthand(int i);
  void strhand(int i);
  void rose(int a,int b);
  void sound1();
  //------------------------------------

void main()
{
  int gdriver=DETECT, gmode;
  int x=0,y=140,x1=640,y1=320;
  clrscr();
  initgraph(&gdriver,&gmode,"c:\\TC\\bgi");
  rectangle(x,y,x1,y1);
  rectangle(0,140,640,320);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(2,141,WHITE);
  setcolor(WHITE);
 // setfillstyle(1,8);
  //setfillstyle(1,15);
  //floodfill(2,141,15);

  goog();
   for(int i=100;i<=235;i=i+5)
    {
    bg();
    //goog();
    //delay(500);
    kettle();
    hands1();
    eyes();
    m1();

    goog();
	draw(i);
	expression(i);
	legs(i);
	h1(i);
    //lefthand(i);
	delay(50);
	cleardevice();
    }
bg();
goog();
draw(235);
//expression(235);
legs(235);
lefthand(235);
expression1(235);

kettle();
eyes();
hands1();
m2();
eb();
delay(1000);
cleardevice();

bg();
goog();
draw(235);
expression1(235);
legs(235);
strhand(235);
rose(-231,-100);
kettle();
eyes();
hands2();
m3();
eb2();
blush();
blush2();
delay(10);
cleardevice();

/*redkettle();
setfillstyle(1,4);
setcolor(4);
circle(236,285,3);
circle(262,285,3);
floodfill(236,285,4);
floodfill(262,285,4);
eyes();
hands2();
m3();
eb2();*/

for(int a=1;a<=50;a++)
{
bg();
goog();
draw(235);
expression1(235);
legs(235);
strhand(235);
rose(-231,-100);
redkettle();
eyes();
hands2();
m3();
eb2();
setfillstyle(1,4);
setcolor(4);
circle(236,285,3);
circle(262,285,3);
floodfill(236,285,4);
floodfill(262,285,4);

if(a%2==0)
{
fl2();
}
else
{ fl1();
}
delay(200);
cleardevice();
}
bg();
goog();
draw(235);
expression1(235);
legs(235);
strhand(235);
rose(-231,-100);
redkettle();
eyes();
hands2();
m3();
eb2();
setfillstyle(1,4);
setcolor(4);
circle(236,285,3);
circle(262,285,3);
floodfill(236,285,4);
floodfill(262,285,4);
sound1();
getch();
closegraph();
}
void goog()
{
    //G
  setfillstyle(SOLID_FILL,9);
  setcolor(9);
  line(17,200,15,300); //|
  line(17,200,97,202);
  line(97,202,99,227);
  line(99,227,79,227);
  line(79,227,80,218);
  line(80,218,38,217);
  line(38,217,38,286);
  line(15,300,98,299);
  line(98,299,98,249);
  line(98,249,58,249);
  line(58,249,58,263);
  line(58,263,76,262);
  line(76,262,77,287);
  line(77,287,37,287);
  floodfill(19,210,9);
  //O
  line(115,205,114,299);
  line(115,205,195,204);
  line(114,299,194,298);
  line(195,204,194,298);
  line(130,222,130,282);
  line(130,222,175,221);
  line(175,221,175,282);
  line(175,282,130,281);
  floodfill(117,207,9);


 //G
  line(17+394,200,15+394,300); //|
  line(17+394,200,97+394,202);
  line(97+394,202,99+394,227);
  line(99+394,227,79+394,227);
  line(79+394,227,80+394,218);
  line(80+394,218,38+394,217);
  line(38+394,217,38+394,286);
  line(15+394,300,98+394,299);
  line(98+394,299,98+394,249);
  line(98+394,249,58+394,249);
  line(58+394,249,58+394,263);
  line(58+394,263,76+394,262);
  line(76+394,262,77+394,287);
  line(77+394,287,37+394,287);
  floodfill(17+395,210,9);
  //E
  line(551,200,551,300);
  line(551,200,623,199);
  line(623,199,623,221);
  line(623,221,571,220);
  line(571,220,572,241);
  line(572,241,616,241);
  line(616,241,616,257);
  line(616,257,571,256);
  line(571,256,572,286);
  line(551,300,623,300);
  line(623,300,623,286);
  line(623,286,572,286);

  floodfill(553,210,9);
//inside O
//floodfill(150,250,15);

  //L
  setcolor(1);
  setfillstyle(SOLID_FILL,1);
line(510,193,540,180);
line(540,180,540,310);
line(540,310,510,308);
line(510,308,510,193);
//setfillstyle(SOLID_FILL,6);
floodfill(520,200,1);
}


//---------------kettle2------------------


void draw(int i)
{
//int x=0,y=140,x1=639,y1=320;
int x2=560,y2=260,x3=580,y3=270,
    x4=550,y4=290,x5=590,y5=230,
    x6=570,y6=220,x7=565,x8=575,y7=210,
    x9=540,x10=553,y10=240;
int a1=608,a2=588,b2=235,
    a3=603,b3=242,a4=598,b4=249,
    b5=256,b6=266;
/*setcolor(15);
rectangle(x,y,x1,y1);
setfillstyle(SOLID_FILL,WHITE);
floodfill(319,180,WHITE);*/
//kettle
setcolor(7);
rectangle(x2-i,y2,x3-i,y3);
setfillstyle(SOLID_FILL,7);
floodfill(570-i,265,7);
setcolor(8);
int pts[10]={x2-i,y3,x3-i,y3,593-i,295,547-i,295,x2-i,y3};
drawpoly(5,pts);
setfillstyle(SOLID_FILL,8);
floodfill(570-i,271,8);
int points[10]={x4-i,y5,x5-i,y5,x3-i,y2,x2-i,y2,x4-i,y5};
drawpoly(5,points);
floodfill(560-i,231,8);
setcolor(7);
int pnt[8]={x6-i,y6,x5-i,y5,x4-i,y5,x6-i,y6};
drawpoly(4,pnt);
setfillstyle(SOLID_FILL,7);
floodfill(570-i,229,7);
setcolor(0);
int pnts[8]={x6-i,y6,x7-i,y7,x8-i,y7,x6-i,y6};
drawpoly(4,pnts);
setfillstyle(SOLID_FILL,0);
floodfill(570-i,211,0);
setcolor(7);
int pont[8]={x4-i,y5,x9-i,y5,x10-i,y10,x4-i,y5};
drawpoly(4,pont);
setfillstyle(SOLID_FILL,7);
floodfill(545-i,231,7);
setcolor(0);
line(x5-i,y5,a1-i,y5); //hor line
line(a1-i,y5,a1-i,b6); //st line
line(a2-i,b2,a3-i,b3);//slant line
line(a3-i,b3,a4-i,b4);//zigzag lines
line(a4-i,b4,a3-i,b5);
line(a3-i,b5,a4-i,b6);
line(a4-i,b6,a1-i,b6);
line(x5-i,y5,a2-i,b2);
setfillstyle(SOLID_FILL,0);
floodfill(595-i,231,0);
}
void legs(int i)
{
int c1=563,c2=567,c3=573,c4=577,d1=309;// y4=290;
setfillstyle(SOLID_FILL,0);
setcolor(0);
//----Hand1------
arc(573-i,295,340,40,15);
arc(570-i,295,342,40,15);
arc(584-i,287,60,120,2);
arc(586-i,300,120,280,2);
floodfill(586-i,300,0);

//-----Hand2------
/*arc(564-i,280,140,200,13);
arc(561-i,280,130,220,14);
arc(553-i,271,0,120,2);
line(550-i,290,551-i,285);
floodfill(553-i,271,0);*/
 //kettle legs
line(c1-i,295,c1-i,d1);
line(c2-i,295,c2-i,d1);
line(c3-i,295,c3-i,d1);
line(c4-i,295,c4-i,d1);
line(c1-i,295,c2-i,295);
line(c3-i,295,c4-i,295);
arc(565-i,d1,180,360,2);//legs
arc(575-i,d1,180,360,2);
floodfill(564-i,296,0);
floodfill(574-i,296,0);
}
void expression(int i)
{//eyes
circle(564-i,280,2);
circle(575-i,280,2);
line(567-i,284,572-i,284);
line(567-i,286,572-i,286);
arc(567-i,285,90,270,1);
arc(572-i,285,270,90,1);
floodfill(564-i,280,0);
floodfill(575-i,280,0);
floodfill(569-i,285,0);
}

void h1(int i)
{
    setfillstyle(SOLID_FILL,0);
    setcolor(0);
    arc(573-i,302,160,170,20);
    arc(570-i,302,160,170,20);
    arc(552-i,298,180,340,2);
    line(551-i,295,554-i,295);
    floodfill(551-i,298,0);

}
void lefthand(int i)
{
    arc(564-i,280,140,200,13);
    arc(561-i,280,130,220,14);
    arc(553-i,271,0,120,2);
    line(550-i,290,551-i,285);
    floodfill(553-i,271,0);
}
void strhand(int i)
{
    line(539-i,290,550-i,290);
    line(539-i,287,550-i,287);
    arc(540-i,288,90,270,2);
    line(550-i,290,551-i,287);
    floodfill(539-i,288,0);
}
void expression1(int i)
{
line(561-i,281,564-i,280); //left eye
line(564-i,280,567-i,281);
line(561-i,279,564-i,278);
line(564-i,278,567-i,279);
line(561-i,281,561-i,279);
line(567-i,281,567-i,279);
floodfill(564-i,279,0);

line(572-i,281,575-i,280); //left eye
line(575-i,280,578-i,281);
line(572-i,279,575-i,278);
line(575-i,278,578-i,279);
line(572-i,281,572-i,279);
line(578-i,281,578-i,279);
floodfill(575-i,279,0);

setlinestyle(0,0,3);
arc(570-i,280,230,310,7);
setlinestyle(0,0,1);
}

//--------------kettle1-------------------

void bg()
{
setfillstyle(SOLID_FILL,WHITE);
setcolor(15);
rectangle(0,140,640,320);
floodfill(1,141,WHITE);
}
void kettle()
{
setcolor(7);
setfillstyle(1,7);
arc(240,270,120,240,25);                      // circular prt
arc(250,270,300,60,25);
line(227,292,263,292);
line(227,249,263,249);
floodfill(240,270,7);
// head
int tri[]={232,243,246,235,258,243,232,243};
fillpoly(4,tri);
setfillstyle(SOLID_FILL,DARKGRAY);            //darkgray parts
setcolor(8);
rectangle(227,249,263,243);
floodfill(230,247,DARKGRAY);
circle(246,230,5);
floodfill(246,230,DARKGRAY);
int base[]={223,298,227,292,263,292,267,298,223,298};
fillpoly(5,base);
//handle
arc(270,270,275,88,12);
arc(270,270,266,92,17);
line(271,283,267,287);
line(271,257,267,253);
floodfill(269,254,8);
//openingofkettle
arc(218,265,180,235,15);
arc(223,260,200,230,12);
line(212,248,212,263);                //rightline
line(205,253,203,265);                //leftline
line(210,278,215,278);
arc(240,270,180,200,25);
line(205,253,200,248);                //triline
line(200,248,212,248);                //topline
floodfill(205,260,8);
//legs
setfillstyle(SOLID_FILL,BLACK);
setcolor(0);
line(240,298,240,309);
line(244,298,244,309);
line(240,298,244,298);
arc(242,309,180,360,2);
line(250,298,250,309);
line(254,298,254,309);
line(250,298,254,298);
arc(252,309,180,360,2);
floodfill(243,299,0);
floodfill(251,299,0);
}
void redkettle()
{
setcolor(12);
setfillstyle(1,12);
arc(240,270,120,240,25);                      // circular prt
arc(250,270,300,60,25);
line(227,292,263,292);
line(227,249,263,249);
floodfill(240,270,12);
// head
int tri[]={232,243,246,235,258,243,232,243};
fillpoly(4,tri);
setfillstyle(SOLID_FILL,DARKGRAY);            //darkgray parts
setcolor(8);
rectangle(227,249,263,243);
floodfill(230,247,DARKGRAY);
circle(246,230,5);
floodfill(246,230,DARKGRAY);
int base[]={223,298,227,292,263,292,267,298,223,298};
fillpoly(5,base);
//handle
arc(270,270,275,88,12);
arc(270,270,266,92,17);
line(271,283,267,287);
line(271,257,267,253);
floodfill(269,254,8);
//openingofkettle
arc(218,265,180,235,15);
arc(223,260,200,230,12);
line(212,248,212,263);                //rightline
line(205,253,203,265);                //leftline
line(210,278,215,278);
arc(240,270,180,200,25);
line(205,253,200,248);                //triline
line(200,248,212,248);                //topline
floodfill(205,260,8);
//legs
setfillstyle(SOLID_FILL,BLACK);
setcolor(0);
line(240,298,240,309);
line(244,298,244,309);
line(240,298,244,298);
arc(242,309,180,360,2);
line(250,298,250,309);
line(254,298,254,309);
line(250,298,254,298);
arc(252,309,180,360,2);
floodfill(243,299,0);
floodfill(251,299,0);
}


void eyes()
{
//eyes
setfillstyle(SOLID_FILL,BLACK);
setcolor(0);
circle(242,280,2.5);
circle(256,280,2.5);
floodfill(242,280,0);
floodfill(256,280,0);
}
void m1()
{
//mouth
setfillstyle(SOLID_FILL,DARKGRAY);
setcolor(8);
line(246,285,252,285);
line(246,287,252,287);
arc(246,286,120,210,1);
arc(252,286,300,60,1);
floodfill(250,286,8);
}
void m2()
{
//circularmouth
setfillstyle(SOLID_FILL,DARKGRAY);
setcolor(8);
circle(249,287,3);
floodfill(249,287,8);
}
void m3()
{
setfillstyle(SOLID_FILL,DARKGRAY);
setcolor(8);
arc(249,292,60,120,8);
arc(249,285,180,360,4.5);
floodfill(249,285,8);
setfillstyle(SOLID_FILL,WHITE);
setcolor(15);
//arc(249,282.5,225,340,4.5);
arc(249,281.5,230,320,4.5);
line(252,284,246,284);
//floodfill(249,285.5,WHITE);
}
void hands1()
{
setcolor(0);
setfillstyle(1,0);
//arms
arc(242,305,135,180,15);
arc(246,305,135,180,15);
arc(234,294,0,160,2);
arc(229,305,180,360,2);
floodfill(229,305,0);
arc(254,305,360,50,15);
arc(250,305,360,50,15);
arc(262,294,0,160,2);
arc(267,305,180,360,2);
floodfill(267,305,0);
}
void hands2()
{
//arms2
setfillstyle(SOLID_FILL,BLACK);
setcolor(0);
arc(234,283,270,320,15);
arc(233,279,270,310,15);
arc(232,296,90,320,2);
arc(244,292,360,120,2);
floodfill(244,292,BLACK);
arc(264,283,222,272,15);
arc(265,279,232,272,15);
arc(265,296,270,80,2);
arc(254,292,80,180,2);
floodfill(254,292,0);
}
void eb()
{
setcolor(0);
arc(239,278,80,180,4);
arc(258,278,360,100,4);

}
void eb2()
{
setcolor(0);
arc(236,273,270,360,4);
arc(262,273,180,270,4);
}
void blush()
{
//blush

delay(1000);
int i;
for(i=1;i<=3;i++)
{
circle(236,285,i);
circle(262,285,i);
setfillstyle(SOLID_FILL,RED);
setcolor(4);
delay(200);
}
floodfill(236,285,4);
floodfill(262,285,4);
}

void blush2()
{
float l=227,k=264;
for(int j=292;j>=278;j--)
{
setcolor(12);
line(l,j,k,j);
l=l-0.785;
k=k+0.785;
delay(30);
}
for(j=278;j>271;--j)
{
line(l,j,k,j);
delay(30);
l=l-0.03;
k=k+0.03;
}
for(j=271;j>=262;--j)
{
line(l,j,k,j);
delay(30);
l=l+0.03;
k=k-0.03;
}
for(j=263;j>=250;j--)
{
line(l,j,k,j);
delay(30);
l=l+0.785;
k=k-0.785;
}
}
void fl1()
{
arc(205,240,120,260,5);
arc(200,231,310,60,5);
arc(207,241,310,60,5);
arc(213,233,120,220,5);
arc(198,240,180,290,5);
arc(191,235,320,40,5);
arc(213,241,310,40,5);
arc(220,234,140,220,5);
}
void fl2()
{
arc(201,226,120,260,4);
arc(211,226,300,60,4);
arc(210,221,140,240,5);
}
//----------ROSE--------
void rose(int a,int b)
{
  setcolor(GREEN);
  rectangle((209/3)-a,((664-200)/3)-b,(218/3)-a,((782-200)/3)-b);
  setfillstyle(1,GREEN);
  floodfill((210/3)-a,((680-200)/3)-b,GREEN);

  line((218/3)-a,((701-200)/3)-b,(222/3)-a,((692-200)/3)-b);
  line((222/3)-a,((692-200)/3)-b,(237/3)-a,((690-200)/3)-b);
  line((237/3)-a,((690-200)/3)-b,(233/3)-a,((705-200)/3)-b);
  line((233/3)-a,((705-200)/3)-b,(218/3)-a,((710-200)/3)-b);
  setfillstyle(1,GREEN);
  floodfill((221/3)-a,((708-200)/3)-b,GREEN);

  line((209/3)-a,((685-200)/3)-b,(202/3)-a,((677-200)/3)-b);
  line((202/3)-a,((677-200)/3)-b,(187/3)-a,((674-200)/3)-b);
  line((187/3)-a,((674-200)/3)-b,(194/3)-a,((690-200)/3)-b);
  line((194/3)-a,((690-200)/3)-b,(209/3)-a,((695-200)/3)-b);
  setfillstyle(1,GREEN);
  floodfill((202/3)-a,((688-200)/3)-b,GREEN);

   setcolor(RED);

   rectangle((186/3)-a,((615-200)/3)-b,(239/3)-a,((650-200)/3)-b);
   setfillstyle(1,RED);
   floodfill((190/3)-a,((646-200)/3)-b,RED);

   line((186/3)-a,((650-200)/3)-b,(209/3)-a,((664-200)/3)-b);
   line((239/3)-a,((650-200)/3)-b,(218/3)-a,((664-200)/3)-b);
   line((209/3)-a,((664-200)/3)-b,(218/3)-a,((664-200)/3)-b);
   setfillstyle(1,RED);
   floodfill((210/3)-a,((660-200)/3)-b,RED);
   line((197/3)-a,((604-200)/3)-b,(197/3)-a,((615-200)/3)-b);
   line((197/3)-a,((604-200)/3)-b,(212/3)-a,((615-200)/3)-b);
   line((212/3)-a,((615-200)/3)-b,(229/3)-a,((604-200)/3)-b);
   line((229/3)-a,((604-200)/3)-b,(229/3)-a,((615-200)/3)-b);
   line((197/3)-a,((615-200)/3)-b,(229/3)-a,((615-200)/3)-b);
   setfillstyle(1,RED);
   floodfill((200/3)-a,((610-200)/3)-b,RED);
   floodfill((226/3)-a,((610-200)/3)-b,RED);
}

//----SOUND--------


void sound1()
{
int a=390,b=465,c=520,d=310,e=350,f=260,g1=290,h1=415,i=450;

  sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(c); delay(700); nosound(); sound(0); delay(500); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
    sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
     sound(c); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(c); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(500); nosound();

	 sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(1000); nosound();



	sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
    sound(c); delay(700); nosound(); sound(0); delay(500); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
   sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
    sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
     sound(c); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(c); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(b); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(b); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
     sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(500); nosound();

	 sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(e); delay(300); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(5); nosound();
       sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(300); nosound(); sound(0); delay(10); nosound();

		sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(g1); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(500); nosound(); sound(0); delay(500); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(d); delay(200); nosound(); sound(0); delay(5); nosound();
	sound(f); delay(500); nosound(); sound(0); delay(10); nosound();


		sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(d); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(300); nosound(); sound(0); delay(10); nosound();

	sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
      sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
       sound(i); delay(200); nosound(); sound(0); delay(10); nosound();
	sound(f); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(a); delay(200); nosound(); sound(0); delay(10); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
      sound(e); delay(200); nosound(); sound(0); delay(3); nosound();
       sound(e); delay(500); nosound(); sound(0); delay(500); nosound();

	sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	 sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	  sound(a); delay(200); nosound(); sound(0); delay(10); nosound();
	   sound(h1); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(h1); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();

	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();

    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();



	   sound(g1); delay(300); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(300); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();

	      sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();


	       sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();

	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(300); nosound(); sound(0); delay(10); nosound();
	      sound(d); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(e); delay(200); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(5); nosound();
	     sound(a); delay(100); nosound(); sound(0); delay(200); nosound();



	   sound(g1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(g1); delay(500); nosound(); sound(0); delay(10); nosound();


	   sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();

	      sound(h1); delay(400); nosound(); sound(0); delay(10); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	    sound(a); delay(200); nosound(); sound(0); delay(20); nosound();
	     sound(f); delay(500); nosound(); sound(0); delay(400); nosound();
}

