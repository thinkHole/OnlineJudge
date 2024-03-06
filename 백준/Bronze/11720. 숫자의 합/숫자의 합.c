#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%1d", &a);

        sum += a;
    }
    printf("%d", sum);
}