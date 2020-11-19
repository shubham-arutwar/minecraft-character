#include <graphics.h>
#include <stdio.h>
#include<conio.h>

// Driver code

void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}


void main()
{

    int gd = DETECT, gm;
    int i , j;
    int x , y;


    initgraph(&gd, &gm, "C://TC3//BGI");

    // rectangle function
//    rectangle(150 , 250 , 160 , 240);
//    rectangle(160 , 250 , 170 , 240);
//    rectangle(170 , 250 , 180 , 240);

    for(i=150; i<250; i = i+20 ){
    	for(j=250 ; j> 150 ; j= j-20){
    		x = i+10;
    		y = j-10;
    		rectangle(i , j , i+20 , j-20);
    		boundaryFill4( x,  y, cyan , 15);
		}
	}
    boundaryFill4( 180,  180, 6 , 15);

    getch();
    closegraph();

}
