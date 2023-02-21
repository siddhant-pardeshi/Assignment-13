//Write a recursive function to calculate factorial of a given number

#include <stdio.h>
int factorial(int n)
{
if (n==0)
    return 1;

return n * factorial(n-1);

}
int main()
{
int n,x;

printf("Enter a number:");
scanf("%d",&n);

x = factorial(n);

printf("Factorial of number is %d",x);

return 0;

}
