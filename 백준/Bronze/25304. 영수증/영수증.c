#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d \n%d", &a, &b);
    int sum = a;
    for (int i = 0; i < b; i++)
    {
        int c, d;
        scanf("%d %d", &c, &d);
        sum -= c * d;
    }
    if (sum == 0)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
