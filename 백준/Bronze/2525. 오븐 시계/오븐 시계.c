#include <stdio.h>

int main(){
    int h, m, n;
    scanf("%d %d\n %d", &h, &m, &n);
    if (h < 0 && h > 23 || m < 0 && m > 59){
        ; //nothing
    } else {
        int tmp = (60 * h + m + n + 1440);
        h = tmp / 60 % 24;
        m = tmp % 60;
    }
    printf("%d %d", h, m);
    
    return 0;
}