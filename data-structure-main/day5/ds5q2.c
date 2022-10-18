#include<stdio.h>
#include<math.h>
int digit(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    return c;
}
int midsquare(int key,int m)
{
   int a=digit(m-1);
    int b=digit(key);
    int c=(2*b-a)/2;
    int x=pow(key,2)/(pow(10,c)+0.001);
    int l=(pow(10,a)+0.001);
    int k=x%l;
    k=k%(m-1);
    return k;

}
int main()
{
int i,j,m,a[1000],key;
     printf("enter the nop of elements in array one");
   scanf("%d",&m);
   printf("enter the number to be entered");
   scanf("%d",&key);
   j=midsquare(key,m);
   printf("%d",j);
   
}