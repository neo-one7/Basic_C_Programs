#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <string.h>

int main(int argc, char *argv[])
{
  float radian,degree;
  char character;
  radian_loop:{
  printf("Convert From Radian to Degree: Enter the radian amount... USE CTRL+C TO EXIT\n");
  scanf("%f",&radian);
  degree = (radian * 180)/M_PI;
  printf("\n %f in Radian is Equal to %f degree\n",radian,degree);
  goto radian_loop;
  
  
   
}
  
  system("PAUSE");	
  return 0;
}
