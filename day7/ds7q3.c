#include<stdio.h>
int main()
{
    int a[100],i,j,n,c,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
    while(a[i]>key&&i>=0)
    {
        a[i+1]=a[i];
        i--;
        
    }
    a[i+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}