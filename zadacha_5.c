#include <stdio.h>
#include <math.h>

int main(void){
    float l, S;
    const float Pi=3.14;
    printf("Enter the length of the circle ");
    scanf("%f", &l);

    if (l <= 0){
        printf("Values cannot be less than one! %f", l);
        return 1;
    }

    else{
        S = pow((l / 2),2) / Pi;
    }

    printf("area of the circle = %f", S);
    return 0;
}