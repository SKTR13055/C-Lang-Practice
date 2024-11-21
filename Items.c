#include <stdio.h>

int main() {
    
    float rice, sugar;
    printf("Enter the price of Rice: ");
    scanf("%f",&rice);
    printf("Enter the price of Sugar: ");
    scanf("%f",&sugar);
    printf("Items\t Price\n");
    printf("Rice\t Rs.%.2f\n",rice);
    printf("Sugar\t Rs.%.2f\n",sugar);
    return 0;
    /*Enter the price of Rice: 16.75
    Enter the price of Sugar: 15
    Items	 Price
    Rice	 Rs.16.75
    Sugar	 Rs.15.00
    */
}
