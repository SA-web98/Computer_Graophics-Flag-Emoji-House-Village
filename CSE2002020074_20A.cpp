#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter your choise\n1/ Flag\n2/ Emoji\n3/ House\n4/ Village\n";
    cin>>ch;

    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(ch)
    {
    case 1:
        setcolor(GREEN);

        rectangle(100,150,300,250);
        setfillstyle(1,GREEN);
        floodfill(110,160,GREEN);

        setcolor(RED);
        circle(200,200,30);
        setfillstyle(1,RED);
        floodfill(200,200,RED);

        setcolor(BROWN);
        rectangle(98,150,100,500);
        setfillstyle(1,BROWN);
        floodfill(99,160,BROWN);

        getch();
        closegraph();
        break;

    case 2:
        circle(300,150,100);
        circle(245,120,10);
        circle(350,120,10);
        line(295,130,285,150);
        line(295,130,305,150);
        line(285,150,305,150);

        ellipse(300, 160, 180, 0, 70, 60);
        getch();
        closegraph();

        break;

    case 3:

        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);


        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();

        break;

    case 4:
        setcolor(WHITE);
        circle(300,50,30);
        setfillstyle(3,RED);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(301,75, WHITE);

        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);


        setfillstyle(SOLID_FILL,BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BROWN);
        floodfill(182, 252, WHITE);
        setfillstyle(SLASH_FILL,WHITE);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        getch();
        closegraph();
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}
