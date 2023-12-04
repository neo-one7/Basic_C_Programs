#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  float radian,degree;
  degree_loop:{  
  printf("\n This program converts from degree to radian:Enter the degree Amount... USE CTRL + C TO QUIT.\n");
  scanf("%f",&degree);
  radian=(M_PI * degree)/ 180;
  printf("\n %f degree is equal to %f radian. \n",degree,radian); 
  goto degree_loop; 
   
   } 
  system("PAUSE");	
  return 0;
}
