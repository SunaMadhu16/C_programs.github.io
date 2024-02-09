#include <stdio.h>

int main() {
    printf("This is my First C program\n");
    int a,b;
    
    printf("Value of a is :");
    scanf("%d",&a);
    printf("Value of b is: ");
    scanf("%d",&b);
    int sum = a+b;
    printf("The sum is : %d \n",sum);
    
    return 0;
}