#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n;
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
    printf("substraction of array :\n ");
    
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
      { 
        c[i][j]=a[i][j]-b[i][j];
        printf("\t%d",c[i][j]);
      }
      printf("\n");
    }


}