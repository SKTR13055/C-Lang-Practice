/*PROGRAM TO PRINT ALL THE EVEN NUMBERS FROM 1 TO 100*/
#include<stdio.h>

int main()
{
    int i;
     for(i = 1;i<101;i++)
     {
         if(i % 2 == 0) //CHECKS IF THE NUMBER IS EVEN OR NOT
         {
             printf("%d ",i); //PRINTING THE NUMBER
         }
     }
}