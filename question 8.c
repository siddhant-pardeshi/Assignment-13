//Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

// Function to print first N terms of Fibonacci series
void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        printFibonacci(n-1, b, a+b);
    }
}

// Main function
int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    printFibonacci(n, 0, 1);

    return 0;
}

