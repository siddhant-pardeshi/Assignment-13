//Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>
int evensum(int n)
{

if (n==1)
    return 2;

return 2*n + evensum(n-1);

}
int main()
{
int n,x;

printf("Enter a number:");
scanf("%d",&n);

x = evensum(n);

printf("sum of N even natural number is %d",x);

return 0;

}
