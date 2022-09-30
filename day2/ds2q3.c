#include<stdio.h>
void inter(int a[],int m,int b[],int n)
{
  int i=0,j=0,k=0,z;
  int c[10];
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
        }
    }
  }
 /* while(i<5)
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
  }*/
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
   inter(a,5,b,5);

}