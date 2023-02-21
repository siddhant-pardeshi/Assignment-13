//Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>

int countdigits(int n)
{
static int count=0;
if (n==0)
    return count;
else
    count++;

countdigits(n/10);
}


int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("The number of Digits are : %d",countdigits(n));
   return 0;
}


