#include <stdio.h>
void resetArr(int arr[], int n)
{
    for (int a = 0; a < n; ++a)
    {
        arr[a] = a + 1;
    }
}

int exchange(int arr[], int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;

    return arr[a], arr[b];
}

int main(){
    int n, m, basket[101] = {0};

    scanf("%d %d", &n, &m);
    resetArr(basket, n);

    for (int k = 0; k < m; ++k)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        --a;
        --b;
        for (int l = 0; l < (b - a + 1) / 2; ++l)
        {
            exchange(basket, a + l, b - l);
        }
    }

    for (int k = 0; k < n; ++k)
        printf("%d ", basket[k]);

    return 0;
}