//Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int oddsum(int n)
{

if (n==1)
    return 1;

return 2*n-1 + oddsum(n-1);

}
int main()
{
int n,x;

printf("Enter a number:");
scanf("%d",&n);

x = oddsum(n);

printf("sum of N odd natural number is %d",x);

return 0;

}
