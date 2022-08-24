#include <stdio.h>
int Greatest(int[], int);
int Greatest(int b[], int n)
{
    int i, max = 0;
    printf("Enter the elements of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
        if (b[i] > max)
            max = b[i];
    }
    printf("greatest no is = %d", max);
    printf("\n");
    return max;
}
int main()
{
    int a[5];
    Greatest(a, 5);
    return 0;
}
