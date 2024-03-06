#include <stdio.h>

int main(){
    int a, b;
    char res;
    
    scanf("%d %d", &a, &b);
    printf("%s\n", ((a > b) ? ">" : ((a < b) ? "<" : ((a == b) ? "==" : "null"))));

    return 0;
}