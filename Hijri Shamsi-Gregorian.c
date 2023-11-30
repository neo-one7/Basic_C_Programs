#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
          
      
   int shamsi = 1402;
   int gre    = 2023;
   int outlook = 2023;
   printf("This Program indicates the two couples of years of Hijri Shmasi Calendar and the Gregorian Year pair \n");
   printf("TOWARDS THE PAST %d = %d - %d   \n", outlook, shamsi, shamsi -1);
   while(shamsi >=1300){
                 outlook=outlook-1;
       shamsi=shamsi-1;
      printf("%d  =    %d - %d \n",outlook, shamsi , shamsi -1 );        
                
                }  
      printf("\n Toward the future:\n");
          shamsi = 1402;
    gre    = 2023;
    outlook = 2023;                  
   while(shamsi <= 1450){
           outlook= outlook + 1 ;
           shamsi = shamsi +1;
           printf(" %d  = %d - %d \n",outlook,shamsi, shamsi + 1);   
                
                }                  
  system("PAUSE");	
  return 0;
}
