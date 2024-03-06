#include <stdio.h>
void resetArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
}

int exchange(int arr[], int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;

    return arr[i], arr[j];
}

int main(){
    int n, m, basket[101] = {0};

    scanf("%d %d", &n, &m);
    resetArr(basket, n);

    for (int c = 0; c < m; ++c)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        --i;
        --j;
        exchange(basket, i, j);
    }

    for (int c = 0; c < n; ++c)
        printf("%d ", basket[c]);

    return 0;
}