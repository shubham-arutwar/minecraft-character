#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int i,j;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TC3//BGI");
//row 1
    rectangle(150,150,170,170);
    rectangle(170,150,190,170);
    rectangle(190,150,210,170);
    rectangle(210,150,230,170);
    rectangle(230,150,250,170);
    rectangle(250,150,270,170);
    rectangle(270,150,290,170);
    rectangle(290,150,310,170);
//row 2
    rectangle(150,170,170,190);
    rectangle(170,170,190,190);
    rectangle(190,170,210,190);
    rectangle(210,170,230,190);
    rectangle(230,170,250,190);
    rectangle(250,170,270,190);
    rectangle(270,170,290,190);
    rectangle(290,170,310,190);
//row 3
    rectangle(150,190,170,210);
    rectangle(170,190,190,210);
    rectangle(190,190,210,210);
    rectangle(210,190,230,210);
    rectangle(230,190,250,210);
    rectangle(250,190,270,210);
    rectangle(270,190,290,210);
    rectangle(290,190,310,210);
//row 4


    getch();
    closegraph();

    return 0;
}
