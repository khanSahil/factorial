#include <stdio.h>
#include <stdlib.h>


// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {  

    int num;

    printf("Enter the number to find the factorial: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of negative numbers is not defined.\n");
    else
        printf("Factorial of %d is %llu.\n", num, factorial(num));

    return 0;
}

