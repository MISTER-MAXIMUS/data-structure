#include<stdio.h>
int main()
{
    int m,i,j,k,temp,low,pos,high,a[100];
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
    printf("enter the elements to be searched in array one");
   scanf("%d",&k);
   low=0;
   high=m-1;
   i=(k-a[low]);
   j=(a[high]-a[low]);
   pos=low+(i*high)/j;
printf("%d",pos);
}
