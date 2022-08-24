#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int d = 2, i;
    while (d != 0)
    {
        int temp = a[4];
        for (i = 4; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        d--;
    }
    for (i = 0; i < 5; i++)
        printf(" %d ", a[i]);
    printf("\n");
    return 0;
}