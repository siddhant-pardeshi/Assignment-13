//Write a recursive function to calculate sum of digits of a given number


#include <stdio.h>
int digitsum(int n)
{
int digit;

digit = n%10;
if (digit==0)
    return 0;

return digit + digitsum(n/10);

}
int main()
{
int n,x;

printf("Enter a number:");
scanf("%d",&n);

x = digitsum(n);

printf("sum of digits of number is %d",x);

return 0;

}
