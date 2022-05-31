#include <stdio.h>
#include <math.h>

int main(void){
    double A, B, C, delta, x1, x2;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (pow(B, 2.0)) - 4 * A * C;

    if(delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    if (A == 0.0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    
    x1 = (-B + sqrt(delta)) / (2 * A);
    x2 = (-B - sqrt(delta)) / (2 * A);

    printf("R1 = %.5f\n", x1);
    printf("R2 = %.5f\n", x2);

    return 0;
  
    

}