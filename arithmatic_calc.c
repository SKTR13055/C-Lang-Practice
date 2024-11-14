#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int main() { 
    int x, y;
    
    // Input values
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    // Perform calculations
    int sum = add(x, y);
    int difference = subtract(x, y);
    int product = multiply(x, y);
    float division = (y != 0) ? divide(x, y) : 0; // Avoid division by zero

    // Display results
    printf("x = %d           y = %d\n", x, y);
    printf("Sum = %d         Difference = %d\n", sum, difference);
    printf("Product = %d     Division = %.2f\n", product, (y != 0) ? division : 0.0);
    
    if (y == 0) {
        printf("Warning: Division by zero is undefined.\n");
    }

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    return (float)x / y; // Cast to float for decimal division
}