
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void insertion_sort(int *a, int n)
{
    int val;
    for (int i = 1; i < n; i++)
    {
        val = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (val < a[j])
            {
                a[j + 1] = a[j];
                a[j] = val;
            }
            else
                break;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertion_sort(a, n);
    int cd = (a[n - 1] - a[0]) / (n - 1);
    int ans;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != (cd + a[i - 1]))
        {
            ans = a[i - 1] + cd;
            break;
        }
    }
    printf("The missing element is %d", ans);

    return 0;
}
