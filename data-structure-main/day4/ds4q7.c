#include<stdio.h>
int min(int k,int j)
{
    if(k>=j)
    {
        return j;
    }
    else{
        return k;
    }
}
int main()
{
int low,high,mid,key,n,x,i,a[100];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key to be searched");
scanf("%d",&key);
i=1;
while(i<n&&a[i]<=key)
{
    i=i*2;
}
low=i/2;
high=min(i,n-1);
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