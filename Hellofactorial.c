#include<stdio.h>

int main()
{
    int i,n;
    int fact=1;
    printf("\n enter number: ");
    scanf("\n %d",&n);
for(int i=n; i>=1; i--)
{
 fact=fact*i;

 printf("\n%d*%d=%d",fact,i,fact); 
}
  return 0;
}