#include<stdio.h>
int main()
{
    int m,i,j,temp,gap,a[100];
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   for(gap=m/2;gap>0;gap=gap/2)
   {
       for(i=gap;i<m;i++)
   {
       temp=a[i];
    for(j=i;j>=gap&&temp<a[j-gap];j=j-gap)
    {
       a[j]=a[j-gap];
       
       
    }
    a[j]=temp;
   }
   }
   for(j=0;j<m;j++)
   {
    printf("\n%d",a[j]);
   }
}