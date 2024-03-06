#include <stdio.h>

int max(int courseN, float arrNum[])
{
    int max = arrNum[0];

    for (int i = 0; i < courseN; ++i)
        if (arrNum[i] > max)
            max = arrNum[i];

    return max;
}

void calc(int courseN, int maxNum, float arrNum[])
{
    for (int i = 0; i < courseN; ++i)
        arrNum[i] = arrNum[i] / (float)maxNum * 100;
}

float average(int courseN, float arrNum[])
{
    float res = 0;
    for (int i = 0; i < courseN; ++i)
    {
        res += arrNum[i];
    }
    return (res / courseN);
}

int main()
{
    int courseN = 0;
    scanf("%d", &courseN);
    float arrNum[courseN + 1];

    for (int i = 0; i < courseN; ++i)
        scanf("%f", &arrNum[i]);

    int maxNum = max(courseN, arrNum);
    calc(courseN, maxNum, arrNum);
    printf("%f", average(courseN, arrNum));

    return 0;
}
