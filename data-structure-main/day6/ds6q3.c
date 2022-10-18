#include<stdio.h>
int fib(int n)
{
    int f[100];
    if(n<=1)
    {
        return n;

    }
    else{
    f[n]=fib(n-1)+fib(n-2);
    return f[n];
}}
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",fib(n));

}