/*Program that uses a function to add() to add these two numbers and sub() to find the difference of these two numbers and display
sum and differnce in the following form 
20 + 10  =  30
20 - 10 = 10*/

#include<stdio.h> //including the header file stdio = standard input/output
/*PROGRAM USING FUNCTIONS*/

int sum(int a , int b); //summing function
int diff(int a , int b);//differnce function


/*---------MAIN PROGRAM BEGINS---------------------------*/
int main()
{
     int a,b,c,d; //declaring the integer variables a,b,c,d
     printf("Enter the values of 'a' and 'b'\n");
     scanf("%d %d",&a,&b); //taking values from the users
     c = sum(a,b); // c variable calling the summing function
     d = diff(a,b);// d variable calling the difference function
     printf("%d + %d = %d\n",a,b,c); //printing the sum
     printf("%d - %d = %d\n",a,b,d); //printing the difference
     return 0;
}
/*---------------MAIN PROGRAM ENDS
                SUM() FUNCTION STARTS-------------------*/
int sum(int x , int y)
{
         return(x+y);
}
/* --------------SUM() FUNCTION ENDS
                 DIFF() FUNCTION STARTS----------*/
int diff(int x , int y)
{
     return(x-y);
}
/*--------------DIFF() FUNCTION ENDS----------------*/