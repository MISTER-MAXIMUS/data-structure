#include<stdio.h>
#include<math.h>

int main()
{
    int m,i,k,j,temp,low,a[100];
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   temp=sqrt(m);
    printf("enter the elements to be searched in array one");
   scanf("%d",&k);
   for(i=0;i<m;i+=temp)
   {
    if(a[i]==k)
    {
        printf("%d",i);
    }
    else if(a[i]<k)
    {
        low=i;

    }
    else{
        break;
    }
   }
    for(i=low;i<m;i++)
    {
        if(a[i]==k)
    {
        printf("%d",i);
    }
    }

   }
   