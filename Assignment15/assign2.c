#include <stdio.h>
int Smallest(int[], int);
int Smallest(int b[], int n)
{
    int i, min;
    printf("Enter the elements of array:");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    min = b[0];
    for (i = 1; i < 5; i++)
    {
        if (min > b[i])
            min = b[i];
    }
    printf("smallest no is =%d", min);
    printf("\n");
    return min;
}
int main()
{
    int a[5];
    Smallest(a, 5);
    return 0;
}