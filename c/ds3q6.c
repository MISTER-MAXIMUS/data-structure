#include<stdio.h>
int main()
{
    int a[100][100],m,i,j,n,c[100][100];
    printf("enter the number of element in array1 : ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
      {  scanf("%d",&a[i][j]);
      }
    }
    printf("transpose of matrix : \n");
    
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
      { 
        printf("\t%d",a[j][i]);
      }
      printf("\n");
    }


}