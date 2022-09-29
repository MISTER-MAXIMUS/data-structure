#include<stdio.h>
int main()
{
    int i,j,k=0,m,n,a[100],b[100],c[100],flag,x;
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("enter the nop of elements in array two");
   scanf("%d",&n);
   for(j=0;j<n;j++)
   {
    scanf("%d",&b[i]);
   }
   for(i=0;i<m;i++)
   {
    c[k]=a[i];
    printf("%d",c[k]);
    k++;
    x=k;
   }
 for(j=0;j<n;j++)
   {
    flag=0;
    for(i=0;i<m;i++)
    { 
    if(b[j]==a[i])
    { flag=1;
    }
    
   }
 
   if(flag==0)
    {
        c[k]=b[j];
          printf("%d",c[k]);
          k++;
    }
   }

}