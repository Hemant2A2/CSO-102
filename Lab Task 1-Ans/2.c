
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int selection_sort(int *a, int n)
{
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_element = a[i], min_index = i; // comparision goes till n-1 as last element would obviously be sorted
        for (int j = i; j < n; j++)
        {
            if (a[j] < min_element)
            {
                min_element = a[j];
                min_index = j;
            }
        }
        swap(&a[i], &a[min_index]);
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int val = selection_sort(a, n);
    printf("\n%d ", val);

    return 0;
}
