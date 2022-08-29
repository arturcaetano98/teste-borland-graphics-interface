#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  int i, gd = DETECT, gm;
  initgraph(&gd, &gm, "TESTE");
  circle(320, 240, 200);
  
  
  i = 220;
  while(i > 5){
  	circle(0, 0, i);
  	i = i - 5;
  }
  
  
  i = 220;
  while(i > 5){
  	circle(640, 0, i);
  	i = i - 5;
  }
  
  
  i = 220;
  while(i > 5){
  	circle(320, 240, i);
  	i = i - 5;
  }
  
  
  i = 220;
  while(i > 5){
  	circle(0, 480, i);
  	i = i - 5;
  }
  
  
  i = 220;
  while(i > 5){
  	circle(640, 480, i);
  	i = i - 5;
  }
  
  getch();
  closegraph();
  return 0;
}