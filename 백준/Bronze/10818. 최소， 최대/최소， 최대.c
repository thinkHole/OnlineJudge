#include <stdio.h>
#include <stdlib.h>>

int min(int n, int numList[])
{
    int min = numList[0];

    for (int i = 0; i < n; ++i)
        if (numList[i] < min)
            min = numList[i];

    return min;
}
int max(int n, int numList[])
{
    int max = numList[0];

    for (int i = 0; i < n; ++i)
        if (numList[i] > max)
            max = numList[i];

    return max;
}

int main()
{
    int n;
    int *numList = malloc(sizeof(int) * 1000001);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &numList[i]);

    printf("%d %d", min(n, numList), max(n, numList));

    return 0;
}
