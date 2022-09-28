#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,sum,j,k,r1,r2,c1,c2;
   printf("enter the number of row and column in second array");
   scanf("%d%d",&c1,&r1);
      
   for(i=0;i<c1;i++)
   {
    for(j=0;j<r1;j++)
{
scanf("%d",&a[i][j]);
}
   }
   printf("enter the number of row and column in second array");
   scanf("%d%d",&c2,&r2);
   for(i=0;i<c2;i++)
   {
    for(j=0;j<r2;j++)
{
scanf("%d",&b[i][j]);
}
   }
   if(c2==r1)
   {
     for(i=0;i<c1;i++)
   {
    for(j=0;j<r2;j++)
{
    sum=0;
for(k=0;k<c2;k++)
{
    sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
printf("\t%d",c[i][j]);
}
printf("\n");
   }
}
}
