#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, sr_k, sr_m;

    scanf("%d %d", &a, &b);

    sr_k = (pow(a, 2) + pow(b, 2)) / 2;
    sr_m = (abs(a) + abs(b)) / 2;
    
    printf("sr_arifm_kv = %d, sr_arifm_mod = %d", sr_k, sr_m);
    return 0;
}