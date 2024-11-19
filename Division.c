/*PROGRAM THAT TAKES TWO FLOAT NUMBERS FROM THE USER AND THEN DIVIDES THE FIRST NUMBER BY THE SECOND AND DISPLAY
 THE RESULT ALONG WITH THE NUMBERS*/
 #include<stdio.h>

 int main()
 {
     float Divsion,number1,number2;
     printf("Enter the value for number1: ");
     scanf("%f",&number1);
     printf("Enter the value for number2: ");
     scanf("%f",&number2);
     Divsion = number1/number2;
     printf("The result of dividing %.2f with %.2f gives the result %.2f",number1,number2,Divsion);
     return 0;
 }