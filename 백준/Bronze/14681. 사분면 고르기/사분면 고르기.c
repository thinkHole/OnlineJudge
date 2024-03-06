#include <stdio.h>

int main(){
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d",x!=0&&y!=0?y>0?x>0?1:2:x<0?3:4:0); //조건 연산자

return 0;
}