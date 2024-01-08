
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int index;
    int ans;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ans = a[j];
                index = j;
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    printf("The index of first recurring element is %d and the value of that element is %d", index, ans);
    return 0;
}
