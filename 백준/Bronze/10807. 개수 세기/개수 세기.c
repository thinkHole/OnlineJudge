#include <stdio.h>
int compare(int n, int arr[])
{
    int v;
    scanf("%d", &v);

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == v)
            ++count;

    return count;
}

int main()
{
    int n, arr[101] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", compare(n, arr));
}
