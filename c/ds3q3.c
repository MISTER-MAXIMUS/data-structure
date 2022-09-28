#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],sum,i,j,k,n;
    printf("enter the number of element in array1 : ");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
      {  scanf("\t%d",&a[i][j]);
      }
      printf("\n");
    }printf("enter the number of element in array2 : ");
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
      {  scanf("\t%d",&b[i][j]);
      }
      printf("\n");
    }
    printf("multiplication of array : \n");
    
    for(i=0;i<n;i++)
    {
       
         for(j=0;j<n;j++)
      { 
         sum=0;
        for(k=0;k<n;k++)
        {
        sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
         printf("\t%d",c[i][j]);
      }
      printf("\n");
    }


}