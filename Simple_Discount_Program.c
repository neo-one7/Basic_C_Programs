#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float new_price,discount,total_price,new_discounted;
  discount_program: {
                  printf("\n Enter the total estimated price of your product \n");
                  scanf("%f",&total_price);
                  printf("\n Enter the discount perncentage as a float or integer number whatever it is,\n without percentage sign we know it as percentage \n");
                  scanf("%f",&discount);
                  new_discounted = (discount*total_price)/100;
                  new_price = (total_price - new_discounted);
                  printf("\n new price is %f and discounted amount is %f , the discount percentage is %f  %% , and the first entered price is %f \n",new_price,new_discounted,discount,total_price );
                  printf("Thanks for your shopping , we love you with all intimacy, please return to us.");
                    
                    
                    
                    goto discount_program;
                    }
  system("PAUSE");	
  return 0;
}
