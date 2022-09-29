#include<stdio.h>
int main()
{
    int i,n,a[100];
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}

}