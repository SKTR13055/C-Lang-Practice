/*This Program is a case study of the taking Average of n number of students */
#include<stdio.h>
#define N 10 //defining the value of N These remain constant through out the program

int main()
{
     int count; // defining the count which stores integer value
     float sum,average,number; //defining sum average number which stores float value
     sum = 0; //Intializing the value
     count = 0; // Intializing the value
     while(count < N) //Repeating the loop 10 times which starts count from 0 till 9
     {
        printf("Enter the numbers to average:   ");
         scanf("%f",&number); //taking the number from the user
         sum = sum+number; //adding sum with number and storing in the sum variable which stores 'n' number of times
         count = count+1; //increases the count by 1
     }
    //After the Condition is satisfied it comes out of the loop ( In this case 10 times)
     average = sum/N; //taking average
     printf("The Sum of all the numbers is %.2f  ",sum);
     printf("The average of all the number is %.2f  ",average);
     return 0;
}
