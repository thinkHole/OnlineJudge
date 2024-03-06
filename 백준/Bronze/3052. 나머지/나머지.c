#include <stdio.h>

const int n = 10;

int search(int arr[])
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
            if (arr[i] == arr[j])
            {
                ++count;
                break;
            }
    }
    return count;
}

int main(){
    int arrList[11] = {0};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arrList[i]);
        arrList[i] %= 42;
    }

    printf("%d", 10 - search(arrList));
    return 0;
}
