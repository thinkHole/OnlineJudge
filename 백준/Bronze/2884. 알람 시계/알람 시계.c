#include <stdio.h>

int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    if (h < 0 && h > 23 || m < 0 && m > 59){
        ;
    } else {
        int tmp = (60 * h + m - 45 + 1440);
        h = tmp / 60 - 24;
        m = tmp % 60;

        if (h < 0){h += 24;}
    }
    printf("%d %d", h, m);
    
    return 0;
}