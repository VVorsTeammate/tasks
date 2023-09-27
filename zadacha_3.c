#include <stdio.h>

int main(void){
    int V, U, T_1, T_2, S;  // T_1 - время движения по озеру; Т_2 - время движения по реке (против течения)
                            // V - скорость лодки; U - скорость течения реки; (V > U); S - путь по озеру и по реке (против течения)
    scanf("%d %d %d %d", &V, &U, &T_1, &T_2);

    if (U>=V || U < 0 || T_1 < 0 || T_2 < 0){
        printf("Values cannot be less than zero! The value V cannot be less than one!");
        return 1;
    }

    else{
        S = V*T_1+(V-U)*T_2;
    }
    
    printf("Pyt' lodki = %d", S);
    return 0;
}