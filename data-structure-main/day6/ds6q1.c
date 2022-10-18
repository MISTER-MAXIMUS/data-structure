#include<stdio.h>
int factorial(int n)
{
    if(n==0){
    return 1;
    }
    else
  { 
     return n*factorial(n-1);
}
}
int main()
{
int n,x;
printf("enter the number");
scanf("%d",&n);
x=factorial(n);
printf("%d",x);
}