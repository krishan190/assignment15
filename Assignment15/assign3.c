#include <stdio.h>
int sort(int[], int);
int sort(int b[], int n)
{
    int i, j;
    printf("Enter element of array:");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (b[i] > b[j])
            {
                int temp;
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("sorted array is ");
    for (i = 0; i < 5; i++)
        printf(" %d ", b[i]);
    printf("\n");
    return 0;
}
int main()
{
    int a[5];
    sort(a, 5);
    return 0;
}