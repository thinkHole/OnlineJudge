#include <stdio.h>
void search(int arr[], int tmp[])
{
    for (int i = 0; i < 30; ++i)
    {
        for (int j = 0; j < 30; ++j)
        {
            if (arr[j] == i + 1)
            {
                tmp[i] = arr[j];
            }
        }
    }
}

void compare(int arr[], int bool)
{
    int n = 0;
    if (bool == 0)
        n = 0;
    else if (bool == 1)
        n = 1;
    else
        return;

    for (int i = 0; i < 30; ++i)
    {
        if (arr[i] != i + 1 + n)
        {
            if (bool == 0)
                bool = 1;
            printf("%d\n", i + 1);
            arr[i] = i;
        }
    }
}
int main(){
    int num[29] = {0};
    int is2nd = 0;
    int tmp[31] = {0};

    for (int i = 0; i < 28; ++i)
        scanf("%d", &num[i]);

    for (int i = 0; i < 28; ++i)
    {

        search(num, tmp);
    }
    if (is2nd == 0)
        compare(tmp, is2nd);
    if (is2nd == 1)
        compare(tmp, is2nd);

    return 0;
}