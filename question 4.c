// Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>
int squaresum(int n)
{

if (n==1)
    return 1;

return n*n + squaresum(n-1);

}
int main()
{
int n,x;

printf("Enter a number:");
scanf("%d",&n);

x = squaresum(n);

printf("sum of square of numbers is %d",x);

return 0;

}
