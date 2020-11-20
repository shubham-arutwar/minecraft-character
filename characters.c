#include <graphics.h>
#include <stdio.h>
#include<conio.h>

int offset_x, offset_y;
int aosx, aosy;
int gd = DETECT, gm;
int i , j;
int x , y;
int c;

void boundaryFill4(int, int, int, int);
void colorprint(int, int, int, int, int);
void creaper();

void main()
{
    int n;
    printf("which character you want to print?\n1. Creaper\n2. Zombie\n");
    scanf("%d",&n );
    if (n==1)
    {
      creaper();
    } else if(n == 2) {
      zombie();
    }
    else{
    	return 0;
	}

    getch();
    closegraph();

}

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
    int b1, b2, b3, b4;
    b1=((x1+offset_x-1)*10)+5;
    b2=((y1+offset_y-1)*10)+5;
    b3=((x2+offset_x-1)*10)+5;
    b4=((y2+offset_y-1)*10)+5;

    for(i=b1;i<=b3;i=i+10)
      {
        for(j=b2; j<=b4; j=j+10)
        {
          x = i;
          y = j;
          boundaryFill4( x,  y, c , 15);
        }
      }
}

void creaper(void)
{
        printf("\n\nEnter the offset from left and top\n");
        scanf("%d%d", &offset_x, &offset_y);
        initgraph(&gd, &gm, "C://TC3//BGI");
        aosx=offset_x*10;
        aosy=offset_y*10;

        for(i=aosx; i<=aosx+150; i = i+10 )
        {
          for(j=aosy; j<=aosy+270 ; j= j+10)  //(300,420)
          {
              x = i+5;
              y = j+5;
              rectangle(i , j , i+10 , j+10);
              boundaryFill4( x,  y, 0 , 15);
          }
        }

        //eyes and mouth
            colorprint(5,1,12,8,2);//face
            colorprint(6,3,7,4,0);//left eye
            colorprint(10,3,11,4,0);//right eye
            colorprint(8,5,9,7,0);//mouth mid
            colorprint(7,6,7,8,0);//mouth left size
            colorprint(10,6,10,8,0);//mouth right side

        //shirt
            colorprint(5,9,12,18,3);//shirt
            colorprint(7,9,10,10,2);//neck
            colorprint(7,10,7,10,3);//left collor
            colorprint(10,10,10,10,3);//right collor

        //left hand
            colorprint(1,9,4,18,3);//sleeve
            colorprint(1,13,4,20,2);//skin
        //left hand
            colorprint(13,9,16,18,3);//sleeve
            colorprint(13,13,16,20,2);//skin

        //legs
            colorprint(5,19,12,26,1);//pant
            colorprint(5,27,12,28,8);//shoe
}

void zombie(){
	
	printf("\n\nEnter the offset from left and top\n");
        scanf("%d%d", &offset_x, &offset_y);
        initgraph(&gd, &gm, "C://TC3//BGI");
        aosx=offset_x*10;
        aosy=offset_y*10;

        for(i=aosx; i<=aosx+150; i = i+10 )
        {
          for(j=aosy; j<=aosy+270 ; j= j+10)  //(300,420)
          {
              x = i+5;
              y = j+5;
              rectangle(i , j , i+10 , j+10);
              boundaryFill4( x,  y, 0 , 15);
          }
        }
        
       // face
            colorprint(5,1,12,2,6); // hair
            colorprint(5,3,12,8,2); // face
            colorprint(5,3,5,3,6);  // hair
            colorprint(12,3,12,3,6); // hair
            
            colorprint(7,7,10,7,12); // mouth
         // colorprint(4,5,4,6,2);    left ear  
         // colorprint(13,5,13,6,2);  right ear
            colorprint(8,6,9,6,10);  // nose
            
            
            colorprint(6,5,6,5,7); // left eye
            colorprint(7,5,7,5,4); // left eye
            
            colorprint(10,5,10,5,4); // right eye
            colorprint(11,5,11,5,7); // right eye
            
            
            
            
        
        
        //shirt
            colorprint(5,9,12,18,3);//shirt
            colorprint(7,9,10,10,2);//neck
            colorprint(7,10,7,10,3);//left collor
            colorprint(10,10,10,10,3);//right collor
            
        
		//left hand
            colorprint(1,9,4,18,3);//sleeve
            colorprint(1,13,4,20,2);//skin
        //left hand
            colorprint(13,9,16,18,3);//sleeve
            colorprint(13,13,16,20,2);//skin

        //legs
            colorprint(5,19,12,26,1);//pant
            colorprint(5,27,12,28,8);//shoe    
	
}
