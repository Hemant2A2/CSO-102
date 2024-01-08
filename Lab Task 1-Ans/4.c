
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void selection_sort(int *a, int n, int k)
{
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        int min_element = a[i], min_index = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < min_element)
            {
                min_element = a[j];
                min_index = j;
            }
        }
        swap(&a[i], &a[min_index]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the value of k :");
    scanf("%d", &k);
    selection_sort(arr, n, k);
    printf("The kth smallest element is : %d", arr[k - 1]);

    return 0;
}
