/*PROGRAM TO PRINT THE TABLE OF 5'S*/
#include<stdio.h>
#define N 5

int main()
{
      int i,sum;
      for (i=1;i<=10;i++)
      {
           sum = N * i;
           printf("%d\n",sum);
      }
      return 0;
}