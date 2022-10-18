#include<stdio.h>
int nearestprime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return n;
    }
    else{
        return nearestprime(n-1);
    }
}
int division(int key,int n)
{
    int np,l;
    np=nearestprime(n);
    l=key%np;
    return l;
}
int main()
{
    int i,j,m,a[100],key;
     printf("enter the nop of elements in array one");
   scanf("%d",&m);
   printf("enter the number to be entered");
   scanf("%d",&key);
   j=division(key,m);
   printf("%d",j);
   
   
}