/*This program is a basic program to print the multiples of 5 in basic way*/
#include<stdio.h>
#define N 10

int main()
{
     int count,sum;
     count,sum = 0;
     while(count < 10)
     {
         sum = sum * 5;
         count = count + 1;
     }
     printf(sum);
}