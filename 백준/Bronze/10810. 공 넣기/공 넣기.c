#include <stdio.h>

int main(){
    int n, m, basket[101] = {0};

    scanf("%d %d", &n, &m);

    for (int c = 0; c < m; ++c)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (; i <= j; ++i)
            basket[i - 1] = k;
    }

    for (int c = 0; c < n; ++c)
        printf("%d ", basket[c]);

    return 0;
}