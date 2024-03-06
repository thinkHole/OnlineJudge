#include <stdio.h>

int fMax(a, b, c){
    if (a < b){
        if (b < c){
            return c;
        } else {
            return b;
        }
    } else {
        if (a < c){
            return c;
        } else {
            return a;
        }
    }
}

int main(){
    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b){
        if (b == c){
            res = 10000+ a * 1000;
        } else {
            res = 1000 + a * 100;
        }
    } else {
        if (a == c){
            res = 1000 + a * 100;
        } else {
            if (b == c){
                res = 1000 + b * 100;
            } else {
                res = fMax(a, b, c) * 100;
            }
        }
    }

    printf("%d\n", res);

    return 0;
}

/* 중복 숫자
a == b
    b == c
        3
    :
        2
:
    a == c
        2
    :
        b == c
            2
        :
            1
*/

/* 가장 큰 숫자
a < b
    b < c
        c
    :
        b
:
    a < c
        c
    :
        a
*/