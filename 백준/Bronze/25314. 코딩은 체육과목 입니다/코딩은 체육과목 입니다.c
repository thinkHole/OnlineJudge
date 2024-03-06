#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a % 4 != 0)
    {
        a += 4;
    }

    for (int i = 0; i < a / 4; i++)
    {
        printf("long ");
    }
    printf("int");

    return 0;
}
