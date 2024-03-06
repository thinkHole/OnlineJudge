#include <stdio.h>

const char n = 9;

int max(int n, int numList[])
{
    int max = numList[0];

    for (int i = 0; i < n; ++i)
        if (numList[i] > max)
            max = numList[i];

    return max;
}
int count(int n, int numList[], int maxNum)
{
    for (int i = 0; i < n; ++i)
        if (numList[i] == maxNum)
            return i + 1;
}
int main()
{
    int numList[n + 1];

    for (int i = 0; i < n; ++i)
        scanf("%d", &numList[i]);

    int maxNum = max(n, numList);
    printf("%d \n%d", maxNum, count(n, numList, maxNum));

    return 0;
}
