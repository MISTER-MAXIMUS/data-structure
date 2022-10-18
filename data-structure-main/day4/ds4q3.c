#include<stdio.h>
int main()
{
    int m,i,j,k,temp,low,mid1,mid2,high,a[100];
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
   mid1=low+(high-low)/2;
   mid2=high-(high-low)/2;
   if(a[low]==k)
   {
    printf("\n%d",low);
   }
   else if(a[mid1]==k)
   {
    printf("\n%d",mid1);
   }
   else if(a[mid2]==k)
   {
    printf("\n%d",mid2);
   }
   else if(a[high]==k)
   {
printf("\n%d",high);
   }
else if(a[mid2]<k)
{
    low=mid2;
}
else if(a[mid1]<k&&a[mid2]>k)
{
    low=mid1;
    high=mid2;

}
else{
    high=mid1;
}
for(i=low;i<=high;i++)
{
if(a[i]==k)
{
    printf("\n%d",i);
}
}
}
   