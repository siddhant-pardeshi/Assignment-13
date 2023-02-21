//Write a program in C to calculate the power of any number using recursion

#include <stdio.h>

int pow(int n,int m)
{
if (m==1)
  return n;

return n*pow(n,m-1);

}
int main()
{
int n,m;
printf("Enter number and power : ");
scanf("%d %d",&n,&m);

printf("power of the number is : %d",pow(n,m));

return 0;
}
