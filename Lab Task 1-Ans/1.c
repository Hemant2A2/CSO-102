
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
    int d = a[1] - a[0];
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) != d)
            ans = 0;
    }
    if (ans)
        printf("%d", d);
    else
        printf("-1");

    return 0;
}
