/*PROGRAM TO ILLUSTRATE THE USE OF TYPEDEF DECLARATION IN A PROGRAM*/
#include<stdio.h>

int main()
{
     typedef int REAL; //TYPE DEFINITION INTEGER
     REAL number1,number2;
     number1 = 20;
     number2 = 30;
     printf("The two values are %d and %d",number1,number2);
     return 0;
}