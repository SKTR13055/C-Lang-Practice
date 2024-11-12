/*Program to convert the temperature from Celsius to Fahrenheit and vice versa*/
#include<stdio.h>
/*PRE-DEFINING FUNCTIONS WHICH ARE GOING TO BE USED IN THE PROGRAM */
float fahren(float c);
float celsius(float f);
/*MAIN PROGRAM STARTS*/
int main()
{ 
     float c,x,f,y;
     printf("Enter the number for conversion from Celsius to Fahrenheit: ");
     scanf("%f",&c);
     printf("Enter the number for conversion from Fahrenheit to Celsius: ");
     scanf("%f",&f);
     x = fahren(c);
     y = celsius(f);
     printf("%.1f\n",x);
     printf("%.1f\n",y);
     return 0;
     
}
/*END OF THE MAIN PROGRAM
-------FAHREN FUNCTION STARTS*/
float fahren(float c)
{
     float F;
     {
         F = (c * 9/5) + 32;
         return(F);
     }
}
/*END OF THE FAHREN FUNCTION
--------CELSIUS FUNCTIONS STARTS*/
float celsius(float f)
{
     float C;
     {
        C = (f-32)*5/9;
        return(C);
     }
}
/*END OF THE CELSIUS FUNCTIONS  */