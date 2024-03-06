#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void){
    int a, b, result = 0;
    char tmpStrB[4], tmpStrRevB[4];

    scanf("%d %d", &a, &b);
    sprintf(tmpStrB, "%d", b);

    int lenB = strlen(tmpStrB);
    for (int i = lenB; i > 0; --i){
        tmpStrRevB[lenB - i] = tmpStrB[i - 1];
    }

    for(int i = 0; i < 3; i++){
        int tmpNumB, tmpMul;
        
        tmpNumB = tmpStrRevB[i] - '0'; //아스키 문자열에서 0(48)을 뺀다.
        tmpMul = a * tmpNumB; //a * b의 일의 자리
        printf("%d\n", tmpMul);
        
        result += tmpMul * pow(10, i); //mul * 10^i
    }
    printf("%d", result);
    
    return 0;
}