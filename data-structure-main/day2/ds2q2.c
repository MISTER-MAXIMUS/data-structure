#include<stdio.h>
void uni(int a[],int m,int b[],int n)
{
  int i=0,j=0,k=0,z;
  int c[10];
  while(i<5&&j<5)
  {
  if(a[i]<b[j])
  {
    c[k]=a[i];
    i=i+1;
    k=k+1;
  }
  else if (a[i]==b[j])
  {
    c[k]=a[i];
    i++;
    j++;
    k++;
  }
  else{
    c[k]=b[j];
    j++;
    k++;
  }}
  while(i<5)
  {
    c[k]=a[i];
    k++;
    i++;
  }
  while(j<5)
  {
    c[k]=b[j];
    k++;
    j++;
  }
   for(z=0;z<k;z++)
    {
      printf("%d",c[z]);
    }

}
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={3,4,5,6,7};
    int c[10],z,k;
   uni(a,5,b,5);

}