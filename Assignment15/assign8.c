#include <stdio.h>
int main()
{
    int a[5], i, j, count = 0;
    printf("Enter the elements of array:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] != a[j])
                count++;
            
            printf("");
        }
    }
    printf("No of count is %d ", count);
    printf("\n");
}