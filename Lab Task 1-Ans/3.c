
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Bubble_sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[i])
                swap(&a[i], &a[j]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Bubble_sort(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
