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
      		boundaryFill4( x,  y, 0 , 15);
  		}
  	}

//eyes and mouth
      colorprint(195,155,265,225,2);//face
      colorprint(205,175,215,185,0);//left eye
      colorprint(245,175,255,186,0);//right eye
      colorprint(225,195,235,215,0);//mouth mid
      colorprint(215,205,215,225,0);//mouth left size
      colorprint(245,205,245,225,0);//mouth right side

//shirt
      colorprint(195,235,265,325,3);
      colorprint(215,235,245,245,2);//neck
      colorprint(215,245,215,245,3);//
      colorprint(245,245,245,245,3);

//left hand
      colorprint(155,235,185,325,3);
      colorprint(155,275,185,345,2);//skin
//left hand
      colorprint(275,235,305,325,3);
      colorprint(275,275,305,345,2);//skin

//legs
      colorprint(195,335,265,405,1);
      colorprint(195,415,265,425,8);//shoe


    getch();
    closegraph();

}
