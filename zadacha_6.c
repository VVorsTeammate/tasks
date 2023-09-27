#include <stdio.h>
#include <math.h>

int main(void){
    int x_1, x_2, x_3, y_1, y_2, y_3;
    float AB, BC, AC, P, S, p;
    scanf("%d %d", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);
    scanf("%d %d", &x_3, &y_3);
    
    printf("Enter the coordinates of vertex A\n");
    AB = sqrt(pow((x_2 - x_1),2) + pow((y_2 - y_1), 2));
    printf("Enter the coordinates of vertex B\n");
    BC = sqrt(pow((x_3 - x_2),2) + pow((y_3 - y_2), 2));
    printf("Enter the coordinates of vertex C\n");
    AC = sqrt(pow((x_1 - x_3),2) + pow((y_1 - y_3), 2));

    P = AB + BC + AC;
    p = P / 2;
    S = sqrt(p* (p - AB) * (p - BC) * (p - AC));

    printf("P = %f S = %f", P, S);
    return 0;
}
