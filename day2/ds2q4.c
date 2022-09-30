#include<stdio.h>
void diff(int a[],int m,int b[],int n)
{
  int i=0,j=0,k=0,z;
  int c[10];
  for(j=0;j<5;j++)
  {
    while(i<5)
    {
      if(a[i]==b[j])
      {
        i++;
        break;
      
      } 
      else{
c[k]=a[i];
i++;
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
    int b[5]={5,6,7,8,9};
    int c[10],z,k;
   diff(a,5,b,5);

}
