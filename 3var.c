/*Write a program to take 3 variables a b and c to compute and display the value of x where
x = a/b-c*/
#include<stdio.h>
int solve(int a ,int b ,int c);
int main()
{
     int a,b,c,x;
     printf("Enter the value of a:  ");
     scanf("%d",&a);
     printf("Enter the value of b:  ");
     scanf("%d",&b);
     printf("Enter the value of c:  ");
     scanf("%d",&c);
     x = solve(a,b,c);
     printf("%d",x);
     return 0;
}
int solve(int a ,int b ,int c)
{
     return(a/b-c);
}