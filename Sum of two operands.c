#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int result_status ;
  int sum_t;
  int num1;
    int num2;
    int i,j;
    int sum = sum_t;
  printf("\n This program finds two number for the sum of them \n");
  printf("\n Enter sum target and the program will find two number in sum: \n"); 
  scanf("%d",&sum_t);
   for(i= 0 ; i < sum_t ; i++){
           for(j=0; j< sum_t; j++){
                    if ( i + j == sum_t){
                    num1 = i ;
                    num2 = j;
                    sum = i +j; 
                    printf("\n %d + %d = %d \n", i, j, sum);     
                    //return 1;
                         }
                      //   else {
//                               printf("\n The program found no numbers as sum \n");
//                            //  return 0 ; 
//                              }
                    }
           }
  //
//  result_status = two_sum(sum_t);
//  if (result_status == 1){
//      two_sum (sum_t);              
//                    }
//  else if (result_status == 0 ){
//        printf("\n The program found no numbers as sum \n");
//                         }
  system("PAUSE");
	
  return 0;
}
//int two_sum (int sum_target){
//    int num1;
//    int num2;
//    int i,j;
//    int sum = sum_target;
//    for(i= 0 ; i < sum_target ; i++){
//           for(j=0; j< sum_target; j++){
//                    if ( i + j == sum_target){
//                    num1 = i ;
//                    num2 = j;
//                    sum = i +j; 
//                    printf("\n %d + %d = %d \n", i, j, sum);     
//                    return 1;
//                         }
//                         else {
//                              return 0 ; 
//                              }
//                    }
//           }
//           
//    }
