#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
    int b[1000],i,j,k;
    j=mid+1;
    i=low;
    k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
            
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
        
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
    
}
void ms(int a[],int low,int high)
{
    if(low<high)
    {
    int mid=(low+high)/2;
    ms(a,low,mid);
    ms(a,mid+1,high);
    merge(a,low,mid,high);
}
}
int main()
{
    int m,i,j,low,high,mid,temp,gap,a[100];
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   high=m-1;
   low=0;
  
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
    ms(a,low,high);
   for(j=0;j<m;j++)
   {
    printf("\n%d",a[j]);
   }
}