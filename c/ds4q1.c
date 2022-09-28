#include<stdio.h>
int main()
{
    int i,n,a[100],key;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
    if(key==a[i])
    {
        printf("\n%d",i);

    }
}
}