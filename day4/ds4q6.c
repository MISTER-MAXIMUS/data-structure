#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],m,i,low,j,high,key,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    low=0;
    high=sqrt(n);
    for(i=low;i<n;i=i+high)
    {
        if(key<=a[i])
        {
         low=i-high;
         break;
        }
    }
    for(j=low;j<=i;j++)
   {
                if(a[j]==key)
                {
                    flag=1;
                }
    }
    if(flag==1)
    {
        printf("%d",j);
    }
    else
    {
        printf("not found");
    }
    
}