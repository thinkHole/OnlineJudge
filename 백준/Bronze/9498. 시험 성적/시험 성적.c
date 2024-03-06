#include <stdio.h>

int main(){
    int score;
    char grade;

    scanf("%d", &score);
    if (!(score < 0 | score > 100)){
        score /= 10;
        printf("%c\n", score >= 9 ? 'A' : score >= 8 ? 'B' : score >= 7 ? 'C' : score >= 6 ? 'D' : 'F');
    }
    
    return 0;
}