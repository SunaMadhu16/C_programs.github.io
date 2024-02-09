#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum = add(num1, num2);
    int difference = subtract(num1, num2);
    int product = multiply(num1, num2);
    float quotient = divide(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
}





// USING POINTERS with Functions
// #include <stdio.h>

// // Function declarations
// int add(int *a, int *b);
// int subtract(int *a, int *b);
// int multiply(int *a, int *b);
// float divide(int *a, int *b);

// int main() {
//     // Input values
//     int num1, num2;
    
//     printf("Enter first number: ");
//     scanf("%d", &num1);
    
//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     // Function calls
//     int sum = add(&num1, &num2);
//     int difference = subtract(&num1, &num2);
//     int product = multiply(&num1, &num2);
//     float quotient = divide(&num1, &num2);

//     // Display results
//     printf("Sum: %d\n", sum);
//     printf("Difference: %d\n", difference);
//     printf("Product: %d\n", product);
//     printf("Quotient: %.2f\n", quotient);

//     return 0;
// }

// // Function definitions
// int add(int *a, int *b) {
//     return *a + *b;
// }

// int subtract(int *a, int *b) {
//     return *a - *b;
// }

// int multiply(int *a, int *b) {
//     return *a * *b;
// }

// float divide(int *a, int *b) {
//     if (*b != 0) {
//         return (float)*a / *b;
//     } else {
//         printf("Error: Division by zero!\n");
//         return 0.0;
//     }
// }
