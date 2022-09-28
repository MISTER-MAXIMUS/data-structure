#include<stdio.h>
int reverse(int k,int n,)
{
  n=n%10;
  sum=sum+n

}
int main()
{
  int k=0,n;
  printf("enter the number");
  scanf("%d",&n); 
  while(n>0)
  {
    n=n/10;
    k++;
  }
}