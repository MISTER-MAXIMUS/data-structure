#include<stdio.h>
int main()
{
int low,high,mid,key,n,x,i,a[10];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key to be searched");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key>a[mid])
{
    low=mid+1;

}
else if(key<a[mid])
{
    high=mid-1;
}
else
{
printf("%d",mid);
break;
}
}
}