#include <stdio.h>

int main(void){
    int V_1, V_2, S, T, S_t; // V_1 - скорость первого авто; V_2 - скорость второго авто
                        // S- расстояние между 1 и 2 авто; Т - время движения; S_t - расстояние через Т часов
    printf("Enter the speed of the first car, the speed of the second, the distance between them and the driving time\n");
    scanf("%d %d %d %d", &V_1, &V_2, &S, &T);

    if (0 > V_1 || V_2 < 0 || T < 0 || S < 0){
        printf("Values cannot be less than zero!");
        return 1;
    }

    else{
        S_t = S + (V_1 + V_2) * T;
    }

    printf("After %d hours, the distance between the cars will be: %d hours", T, S_t);
    return 0;
}
