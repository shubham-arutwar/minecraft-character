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

void colorprint(int x1,int y1, int x2, int y2, int c)
  {
      int i , j;
      int x , y;
        for(i=x1;i<=x2;i=i+10)
        {
          for(j=y1; j<=y2; j=j+10)
          {
            x = i;
            y = j;
            boundaryFill4( x,  y, c , 15);
          }
        }
  }

void main()
{

    int gd = DETECT, gm;
    int i , j;
    int x , y;
    int c;
    initgraph(&gd, &gm, "C://TC3//BGI");

    for(i=150; i<=300; i = i+10 )
    {
    	for(j=150; j<= 420 ; j= j+10)  //(300,420)
      {
      		x = i+5;
      		y = j+5;
      		rectangle(i , j , i+10 , j+10);
      		boundaryFill4( x,  y, 2  , 15);
  		}
  	}

//eyes and mouth
        //left eye
        for(i=205;i<216;i=i+10)
        {
          for(j=175; j<186; j=j+10)
          {
            x = i;
            y = j;
            boundaryFill4( x,  y, 0 , 15);
          }
        }

      //right eye
      for(i=245;i<256;i=i+10)
      {
        for(j=175; j<186; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }

      //mouth mid
      for(i=225;i<236;i=i+10)
      {
        for(j=195; j<216; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, 0 , 15);
        }
      }
      colorprint(215,205,215,225,0);
      colorprint(245,205,245,225,0);//mouth right side


    getch();
    closegraph();

}
