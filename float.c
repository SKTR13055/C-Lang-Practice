/*PROGRAM TO READ TWO FLOATING POINT NUMBERS USING A SCANF STATEMENET, ASSIGN THEIR SUM TO AN INTEGER VARIABLE AND THEN OUTPUT THE VALUES
OF ALL THE THE THREE VARIABLE*/
#include<stdio.h>

float sum(float n1,float n2);

int main()
{
    float a,b;
    printf("Enter the value for a: ");
    scanf("%f",&a);
    printf("Enter the value for b: ");
    scanf("%f",&b);
    sum(a,b);
    return 0;
}

float sum(float n1,float n2)
{
     int n3;
     n3 = n1 + n2;
     printf("The sum of %.2f and %.2f is %d",n1,n2,n3);
     return 0;
}