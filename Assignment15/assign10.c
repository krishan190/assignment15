#include <stdio.h>
int main()
{
    int a[10], i;
    int freq[100] = {0};
    printf("Enter a element of array");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    // int a[10] = {2, 3, 45, 65, 7, 5, 4, 34, 33, 45};

    for (i = 0; i < 10; i++)
    {
        freq[a[i]]++;
    }
    for (i = 0; i < 100; i++)
    {
        if (freq[i] != 0)
            // printf("%d ==> %d\n", a[i], freq[a[i]]);
            printf("%d ==> %d\n", i, freq[i]);
    }
}