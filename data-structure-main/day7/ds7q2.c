#include <stdio.h>
void min(int low, int high, int a[])
{
    int i, k, temp;
    while (low <= high)
    {
        for (i = low; i <= high; i++)
        {
            if (a[low] >a[i + 1])
            {
                temp = a[low];
                a[low] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        printf("\n%d", a[low]);
        low = low + 1;
    }
    
}
int main()
{
    int low, high, i, n, a[15], x;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n - 1;
    min(low, high, a);
}