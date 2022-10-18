#include<stdio.h>
int search(int a[],int low,int high,int key)
{int mid;
    if(low<=high)
    {
    mid=(low+high)/2;
    
    if (key<a[mid])
    {
        return search(a,low,mid-1,key);
    }
    else if(key>a[mid])
    {
        return search(a,mid+1,high,key);
    }
    else{
        return mid;
    }

}
else 
{
    return -1;
}
}
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
mid=(low+high)/2;
x=search(a,low,high,key);
if(x==-1)
{
    printf("item not found");
}
else{
printf("%d",x);
}
}