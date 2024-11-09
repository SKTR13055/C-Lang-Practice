/*Program to compute and display its area. Use a symbotic constant to define the pi value and assume a suitable value for radius*/
#include<stdio.h>
#define pi 3.14
int main(void)
{
    float area,radius; //defining the varibles
    //taking the radius value from the user
     printf("Enter the radius of the circle:  ");
     scanf("%f",&radius);
    
     //Calculating the area
     area = pi * radius * radius;
     printf("The area of the circle with radius %.2f is: %.2f\n",radius,area);

}