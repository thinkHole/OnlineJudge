#include <stdio.h>
int main()
{
    int n, x, arr[10001] = {0};
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; ++i)
        if (arr[i] < x)
            printf("%d ", arr[i]);
}
