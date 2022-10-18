#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,c[100][100];
    printf("enter the number of element in array1 : ");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
      {  scanf("\t%d",&a[i][j]);
      }
      printf("\n");
    }
    printf("transpose of matrix : \n");
    
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
      { 
        c[i][j]=a[j][i];
        printf("\t%d",c[i][j]);
      }
      printf("\n");
    }


}