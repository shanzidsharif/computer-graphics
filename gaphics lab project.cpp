#include<graphics.h>
#include<iostream>

using namespace std;

void home();
void ghor();
void cycle();
void roundcirle();
void rectangle_star();
void scenario();
void recta();

name(){

line(30, 30, 30, 60);
line(30, 30, 45, 45);
line(45, 45, 60, 30);
line(60, 30, 60, 60);
//M done
//D
line(65, 30, 65, 60);
ellipse(65,45, -90, 90, 20, 15);
//d finished
circle(90, 58, 2);
//s started
ellipse(110,40, 70, -130, 10, 8);
ellipse(106,54, -110, 100, 10, 8);

//s finished
//h started
line(130, 30, 130, 60);
line(150, 30, 150, 60);
line(130, 45, 150, 45);
//h finished
//a
line(165, 30, 155, 60);
line(165, 30, 175, 60);
line(160, 45, 170, 45);

//a finished

//n start

line(180, 30, 180, 60);
line(180, 30, 200, 60);
line(200, 30, 200, 60);
//n finished
//z started
line(210, 30, 220, 30);
line(210, 60, 220, 60);
line(220, 30, 210, 60);
//z finished
// i started

line(230, 30, 230, 60);

//i finished
// d started
line(240, 30, 240, 60);
ellipse(240,45, -90, 90, 20, 15);
//d finished
//u started
line(270, 30, 270, 55);
line(290, 30, 290, 55);
ellipse(280, 55, -180, 360,10, 5);
//u finished
//r started
line(300, 30, 300, 60);

ellipse(300, 40, -90, 90, 20, 10);
line(300, 50, 320, 60);
//r finished

//r started
line(340, 30, 340, 60);
ellipse(340, 40, -90, 90, 20, 10);
line(340, 50, 360, 60);
//r finished

//a started
line(375, 30, 365, 60);
line(375, 30, 385, 60);
line(370, 45, 380, 45);

//a finished

//h started
line(390, 30, 390, 60);
line(410, 30, 410, 60);
line(390, 45, 410, 45);
//h finished
//m started
line(420, 30, 420, 60);
line(420, 30, 435, 45);
line(435, 45, 450, 30);
line(450, 30, 450, 60);
//M done
//a started
line(470, 30, 460, 60);
line(470, 30, 480, 60);
line(465, 45, 475, 45);

//a finished

//n start

line(490, 30, 490, 60);
line(490, 30, 510, 60);
line(510, 30, 510, 60);
//n finished

//s started
ellipse(540,40, 70, -130, 10, 8);
ellipse(536,54, -110, 100, 10, 8);

//s finished
//h started
line(560, 30, 560, 60);
line(580, 30, 580, 60);
line(560, 45, 580, 45);
//h finished
//a started
line(600, 30, 590, 60);
line(600, 30, 610, 60);
line(595, 45, 605, 45);

//a finished
//r started
line(620, 30, 620, 60);
ellipse(620, 40, -90, 90, 20, 10);
line(620, 50, 640, 60);
//r finished
//i started
line(650, 30, 650, 60);
//i finished
//f started
line(660, 30, 660, 60);
line(660, 30, 680, 30);
line(660, 45, 680, 45);
//f finished
//id
//c started
ellipse(60,110, 90, -90, 20, 20);
///c finished

///s started
ellipse(90,100, 80, -100, 20, 10);
ellipse(90,120, -110, 100, 20, 10);

///s finished
//f started
line(120, 90, 120, 130);
line(120, 90, 140, 90);
line(120, 110, 140, 110);
line(120, 130, 140, 130);
//f finished
///2
ellipse(170,100, 0, -180, 10, 10);

line(180,100, 160,130 );
line(160, 130, 180, 130);

///end 2

///1

line(195, 90, 195, 130);
/// 1
///0

ellipse(210, 110, 0, 360, 10, 20);
///0

///3
ellipse(230, 100, -90, 90, 20, 10);
ellipse(230, 120, -90, 90, 20, 10);

///3
///0

ellipse(265, 110, 0, 360, 10, 20);
///0

///2
ellipse(290,100, 0, -180, 10, 10);

line(300,100, 280,130 );
line(280, 130, 300, 130);

///end 2
///4
line(330, 90, 330, 130);
line(330, 90, 310, 110);
line(310, 110, 330, 110);

///4

///0

ellipse(350, 110, 0, 360, 10, 20);
///0
///1

line(370, 90, 370, 130);
/// 1
///0

ellipse(390, 110, 0, 360, 10, 20);
///0



}

void home(){

    initwindow(1000, 1000);
    name();


setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle (40,240,50,500);
floodfill(41,241,WHITE);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle (50,240,220,350);
floodfill(51,251,GREEN);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(130,300,30);

floodfill(130,300,RED);



setcolor(YELLOW);

ellipse(650, 300, 0, 360, 50, 50);
setfillstyle(SOLID_FILL, YELLOW);
floodfill(650, 300, YELLOW);

setcolor(BLACK);
setfillstyle(SOLID_FILL, BLACK);


fillellipse(610, 285, 2, 6);
fillellipse(590, 285, 2, 6);


ellipse(600, 300, 205, 335, 25, 9);
ellipse(600, 300, 205, 335, 25, 10);
ellipse(600, 300, 205, 335, 25, 11);

setcolor(YELLOW);

   line(300, 300, 500, 300);
   line(300, 500, 500, 500);
   line(300, 300, 300, 500);
   line(500, 300, 500, 500);
   ///end main square
   ///left side
   line(300, 300, 260, 270);
   line(300, 500, 260, 470);
   line(260, 270, 260, 470);
    ///end left side
    ///left side window
    line(265, 380, 285, 400);
    line(265, 380, 265, 340);
    line(265, 340, 285, 360);
    line(285, 360, 285, 400);
    line(275, 360, 275, 380);

    ///end left side window

    ///main door

    line(380, 490, 430, 490);
    line(380, 380, 430, 380);
    line(380, 380, 380, 490);
    line(430, 380, 430, 490);
    line(405, 385, 405, 485);

    ///main door

    ///roof
    line(500, 300, 460, 240);
    line(460, 240, 320, 240);
    line(320, 240, 300, 300);
    line(320, 240, 260, 270);

    ///end roof

    ///bottom side
    line(260, 470, 260, 480);
    line(260, 480, 295, 510);
    line(295, 510, 500, 510);
    line(500, 510, 500, 500);


    line(295, 510, 300, 500);

    ///end bottom side

    ///stairs
    line(380, 515, 440, 515);
    line(380, 525, 440, 525);
    line(380, 525, 380, 515);
    line(440, 525, 440, 515);

    line(380, 515, 380, 500);
    line(440, 515, 440, 500);


    line(390, 535, 430, 535);
    line(390, 535, 390, 525);
    line(430, 535, 430, 525);

    ///end stairs

    getch();
    closegraph();

}

void star()
{
    initwindow(1000, 1200);
    name();

    line(100, 500,300, 250);
    line(300, 250, 500, 500);
    line(100, 500, 500, 500);



    line(300, 600, 100, 350);
    line(300, 600, 500, 350);
    line(500, 350, 100, 350 );

    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 251, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(110, 351, WHITE)
    ;
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(305, 490, WHITE);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(105, 499, WHITE);

    setfillstyle(HATCH_FILL, BLUE);
    floodfill(300, 580, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(490, 499, WHITE);

    setfillstyle(HATCH_FILL, YELLOW);
    floodfill(490, 351, WHITE);

    getch();
    closegraph();

}
int main(){

int gd= DETECT, gm, x;
initgraph(&gd, &gm, "");


cout << "Enter 1 number for home\n";
cout << "Enter number 2 for star\n";
cout << "Enter  number 3 for cycle\n";
cout << "Enter  number 4 for roundcircle\n\n";
cout << "Enter  number 5 for scenario\n";
cout << "\nEnter any number" ;
cin >> x;

switch(x){

    case 1:
        {
            home();
            break;
        }
        case 2:
        {
            star();
            break;
        }
        case 3:
        {
            cycle();
            break;
        }
        case 4:
        {
            roundcirle();
            break;
        }
        case 5:
        {
            scenario();
            break;
        }
        case 6:
            {
                recta();
                break;
            }
        default:
            cout << "Wrong Input";

}


return 0;
}
void cycle(){


    char names[30];
    cin>>names;

    initwindow(1000, 1000);
    name();




    ///ghor


    ///tree


   while(1){


     for( int i = 20; i<=600; i= i +10){

        cleardevice();

        ghor();


        ///ROAD

        setcolor(WHITE);

        rectangle(0,440, 900, 490);
        setfillstyle(INTERLEAVE_FILL, 2);
        floodfill(10, 455, WHITE);




        setcolor(13);
        circle(50+ i, 400, 40);
        circle(280+ i, 400, 40);




        setcolor(WHITE);
        circle(50+ i, 400, 30);
        circle(280+ i, 400, 30);

        setcolor(6);
        circle(50+ i, 400, 10);
        circle(280+ i, 400, 10);

        /// wheel done
        ///
        setcolor(GREEN);
        line(50+i, 400, 150+i, 400);
        line(50+i, 400, 100+i, 300);
        line(100+i, 300, 150+i, 400);

        /// Back Triangle

        ///front iron

        line(280+i, 400, 230+i, 300);
        line(230+i, 300, 150+i, 400);
        line(230+i, 300, 100+i, 300);

        setcolor(YELLOW);
        rectangle(80+i, 280,120+i,300);
        setfillstyle(HATCH_FILL, DARKGRAY);
        floodfill(82+i, 285, YELLOW);

        ///Cycle Handle

        setcolor(WHITE);
        line(230+i, 295, 250+i, 290);
        line(230+i, 295, 220+i, 305);


        ///padel

        setcolor(WHITE);
        line(150+i, 400, 150+i, 380);
        line(150+i, 400, 150+i, 420);

        setcolor(RED);
        line( 150+i, 420, 160+i,420);
        line(150+i, 380, 140+i, 380);

        ///name
        setcolor(11);
        settextstyle(1,0, 5);
        outtextxy(110+i, 240, names);
        outtextxy(50+i, 50+i, "*");
        outtextxy(80+i, 10+i, "*");
        outtextxy(100+i, 150+i, "*");
        outtextxy(120+i, 45+i, "*");
        outtextxy(150+i, 180+i, "*");

        delay(200);






    }



   }

getch();
closegraph();



}
///circle

void roundcirle()
{
    initwindow(1000, 1000);
    name();

        int x, y, i;

    x = getmaxx()/2;
    y = getmaxy()/2;

    while(1){

        for( i = 20; i<200; i++)
   {
       setcolor(i/10);
       arc(x, y, 0, 180, 15+i);
       arc(x, y, 180, 0, 15-i);
       delay(50);
       arc(x, y, 180, 360, 15+i);
       arc(x, y, 360, 180, 15-i);
       delay(50);

   }
   cleardevice();

    }
}
///
void ghor()
{


    ///tree
    setcolor(LIGHTGREEN);
    rectangle(50,350, 70,440);
    arc(50,350,90, 270, 40 );
    arc(50,320,90, 200, 40 );

    arc(70,350,270, 90, 40 );
    arc(70,320,340, 90, 40 );
    arc(60,300,350, 190, 50 );


    setcolor(GREEN);
    rectangle(300,300, 500, 500);
   ///end main square


   ///left side
    line(300, 300, 260, 270);
    line(300, 500, 260, 470);
    line(260, 270, 260, 470);
    setfillstyle(INTERLEAVE_FILL, BLUE);
    floodfill( 265,300,  GREEN);

    ///end left side
    ///left side window
    setcolor(DARKGRAY);
    line(265, 380, 285, 400);
    line(265, 380, 265, 340);
    line(265, 340, 285, 360);
    line(285, 360, 285, 400);

    setfillstyle(INTERLEAVE_FILL, RED);
    floodfill( 270, 382, DARKGRAY);
    setcolor(GREEN);
    line(275, 360, 275, 380);

    ///end left side window

    ///main door

    line(380, 490, 430, 490);
    line(380, 380, 430, 380);
    line(380, 380, 380, 490);
    line(430, 380, 430, 490);


    setcolor(GREEN);
    line(405, 385, 405, 485);
    ///main door

    ///roof
    line(500, 300, 460, 240);
    line(460, 240, 320, 240);

    line(320, 240, 260, 270);
    setfillstyle(INTERLEAVE_FILL, YELLOW);
    floodfill( 480, 280, GREEN);
    setcolor(LIGHTCYAN);
    line(320, 240, 300, 300);
    ///end roof
    setcolor(GREEN);
    ///bottom side
    line(260, 470, 260, 480);
    line(260, 480, 295, 510);
    line(295, 510, 500, 510);
    line(500, 510, 500, 500);


    line(295, 510, 300, 500);

    ///end bottom side

    ///stairs
    line(380, 515, 440, 515);
    line(380, 525, 440, 525);
    line(380, 525, 380, 515);
    line(440, 525, 440, 515);

    line(380, 515, 380, 500);
    line(440, 515, 440, 500);


    line(390, 535, 430, 535);
    line(390, 535, 390, 525);
    line(430, 535, 430, 525);

    ///color
    setfillstyle(INTERLEAVE_FILL, RED);
    floodfill( 350, 350, GREEN);


}


/// scenario


void rectangle_star()
{


///rectangle
setcolor(RED);
rectangle(0, 145, 639,330);
setfillstyle(INTERLEAVE_FILL, LIGHTCYAN);
floodfill(10, 150, RED);
setcolor(WHITE);
line(639,330, 639, 560);
line(639,330, 639, 300);
line(639, 300, 639, 150);
line(639, 150, 0,150);
line(0,150, 0, 330);
///
// HOUSE

line(150,200,200,250);
line(150,200,80,270);
line(80,270,100,270);
line(150,200,350,200);

line(350,200,400,250);

line(100,250,100,350);
line(100,350,200,350);
line(200,250,200,350);
line(400,350,400,250);

line(200,350,400,350);
line(200,250,400,250);
rectangle(130,280,170,320);
rectangle(250,280,320,250);
line(320,280,305,290);
line(305,290,305,350);
line(250,280,265,290);

line(265,290,265,350);
line(100,350,90,360);
line(90,360,190,360);
line(190,360,200,350);
line(190,360,410,360);
line(400,350,410,360);

// HOUSE COLOR

setfillstyle(8,2);
floodfill(131,281,WHITE);
setfillstyle(11,7);
floodfill(101,251,WHITE);
setfillstyle(1,13);
floodfill(163,205,WHITE);
setfillstyle(1,13);
floodfill(82,269,WHITE);
setfillstyle(3,10);
floodfill(251,271,WHITE);
setfillstyle(1,6);
floodfill(150,355,WHITE);
setfillstyle(1,6);
floodfill(250,355,WHITE);
setfillstyle(5,13);
floodfill(310,295,WHITE);
setfillstyle(5,13);
floodfill(260,295,WHITE);

// TREE

line(505,280,505,350);
line(532,280,532,350);
line(505,350,531,350);
line(480,280,560,280);
line(480,280,500,250);
line(500,250,480,250);
line(480,250,500,220);
line(500,220,480,220);
line(480,220,520,190);
line(560,280,540,250);
line(540,250,560,250);
line(560,250,540,220);
line(540,220,560,220);
line(560,220,520,190);

// COLOR TREE
setfillstyle(1,6);
floodfill(506,281,WHITE);
setfillstyle(1,2);
floodfill(501,251,WHITE);

// ROAD

line(270,360,290,540);
line(315,360,360,540);
line(0,540,290,540);
line(360,540,639,540);
line(0,560,639,560);
line(0,540,0,560);
line(639,540,639,560);
setfillstyle(1,6);
floodfill(1,541,WHITE);

// MOUNTAIN



line(100,330,0,330);
line(400,330,505,330);
line(532,330,639,330);
line(100,300,50,260);
line(50,260,0,300);
line(400,300,450,260);
line(450,260,505,300);
line(532,300,590,260);
line(590,260,639,300);


setfillstyle(1,8);
floodfill(50,300,WHITE);
setfillstyle(1,8);
floodfill(401,300,WHITE);
setfillstyle(1,8);
floodfill(535,300,WHITE);
setfillstyle(1,11);

//SKY

floodfill(0,150,WHITE);
setfillstyle(1,9);
floodfill(504,298,WHITE);
setfillstyle(1,9);
floodfill(535,282,WHITE);

// POND

ellipse(500,450,0,360,100,30);
ellipse(150,450,0,360,100,30);
setfillstyle(1,3);
floodfill(550,450,WHITE);
floodfill(200,450,WHITE);

// SUN

circle(70,200,30);
setfillstyle(1,13);
floodfill(71,201,WHITE);

// GRASS COLOR

setfillstyle(SLASH_FILL,LIGHTGREEN);
floodfill(20,400,WHITE);
setfillstyle(1,2);
floodfill(350,380,WHITE);
setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
rectangle (40,440,50,600);
floodfill(41,441,BLUE);
setcolor(RED);
setfillstyle(SOLID_FILL,GREEN);
rectangle (50,440,220,550);
floodfill(51,451,RED);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(130,500,30);

floodfill(130,500,RED);
setcolor(WHITE);







}
void scenario(){


initwindow(800, 700);
name();


int x, y, i;
x = getmaxx();
y = getmaxy();
int j = 0;
for(j = 0; j<200; j++)
{
    rectangle_star();
    settextstyle(1, 0, 5);
    i = j;
    if(i ==20){
        i = 0;
    }
    outtextxy(10 + j, 200+ i , "*");
    outtextxy(15 + j, 150+i , "*");
    outtextxy(20 + j, 130 , "*");
    delay(10);



}

getch();
closegraph();

}

void recta()
{
    initwindow(800, 800);
    name();
    int i;
    rectangle(300, 400, 600, 700);
    for(i = 0; i <=13; i++){

        if(i==13){
            i =0;
        }
        setfillstyle(SOLID_FILL, i);
        floodfill(305, 410, WHITE);
        delay(10);
}
}
