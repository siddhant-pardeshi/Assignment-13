//Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

int HCF(int n1,int n2)
{
  if(n2==0)
  {
    return n1;
  }
  else
  {
     return HCF(n2,n1%n2);
  }

}
int main()
{
int n1,n2;

  printf("Enter two numbers");
  scanf("%d %d",&n1,&n2);

  printf("HCF = %d\n\n",HCF(n1,n2));

  return 0;
}
