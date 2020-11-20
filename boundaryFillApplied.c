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

    for(i=150; i<230; i = i+10 )
    {
    	for(j=230 ; j> 150 ; j= j-10)
      {
      		x = i+5;
      		y = j-5;
      		rectangle(i , j , i+10 , j-10);
      		boundaryFill4( x,  y, 2  , 15);
  		}
  	}
//eyes and mouth
        //left eye
        for(i=165;i<176;i=i+10)
        {
          for(j=175; j<186; j=j+10)
          {
            x = i;
            y = j;
            boundaryFill4( x,  y, 0 , 15);
          }
        }

      //right eye
      for(i=205;i<216;i=i+10)
      {
        for(j=175; j<186; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }

      //mouth mid
      for(i=185;i<196;i=i+10)
      {
        for(j=195; j<216; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }
      //mouth left side
      for(i=175;i<176;i=i+10)
      {
        for(j=205; j<226; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }
      //mouth right side
      for(i=205;i<206;i=i+10)
      {
        for(j=205; j<226; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }


    getch();
    closegraph();

}
void eyesandmouth(int i,int j,int x,int y)
{

      int gd = DETECT, gm;
      initgraph(&gd, &gm, "C://TC3//BGI");

}
