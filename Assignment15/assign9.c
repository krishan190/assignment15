#include <stdio.h>
int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {4, 6, 8, 10, 22};
    int c[10], k = 0, i = 0, j = 0;
    for (k = 0; k < 10; k++)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
    for (k = 0; k < 10; k++)
        printf(" %d ", c[k]);
    printf("\n");
}