#include <stdio.h>

int main(void){

    int a, b, sum, razn, pro, chas;
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0){
        printf("What the hell?! That's not what we agreed! Remove the zero!");
        return 1;
    }

    else{
        sum = a + b;
        razn = a - b;
        pro = a * b;
        chas = a / b;
    }

    printf("summa = %d, raznost = %d, proizvedenie = %d, chasnoe = %d", sum, razn, pro, chas);
    return 0;
}