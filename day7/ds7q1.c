#include<stdio.h>
int main()
{
    int m,i,j,temp,a[100];
   printf("enter the nop of elements in array one");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
    for(j=0;j<m-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       
    }
   }
   for(j=0;j<m;j++)
   {
    printf("\n%d",a[j]);
   }
}
