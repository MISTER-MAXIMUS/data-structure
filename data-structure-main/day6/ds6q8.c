#include<stdio.h>
int sum=0,r;
int reverse(int n)
{
  if(n>0)
{
  r=n%10;
  sum=sum+r;
return reverse(n/10);
}
else{
  return sum;
}
}
int main()
{
  int k,n;
  printf("enter the number");
  scanf("%d",&n); 
  k=reverse(n);
  printf("%d",k);
}