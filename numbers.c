/*WRITE A NUMBER TO COUNT AND PRINT THE NUMBER OF NEGATIVE AND POSITIVE INTEGER IN A GIVEN SET OF NUMBERS*/
#include<stdio.h>
int main()
{   //DEFINE A SET OF NUMBERS
     int numbers[] = {3,-1,-2,5,6,7,-20};
     int positive_numbers = 0;
     int negative_numbers = 0;
     int arr_size = sizeof(numbers)/sizeof(numbers[0]);


     //ITERATING THROUGH THE SET OF NUMBERS 
     for(int i = 0;i<arr_size;i++)
     {
         if(numbers[i] > 0)
         {
             positive_numbers++;
         }
         else if(numbers[i] < 0)
         {
             negative_numbers++;
         }
     }
     
    //PRINTING THE TOTAL NUMBER OF POSITIVE NUMBER AND NEGATIVE NUMBER
     printf("The number of positive number is: %d\t",positive_numbers);
     printf("The number of negative number is: %d\t",negative_numbers);
     return 0;
}