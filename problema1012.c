#include <stdio.h>
#include <math.h>

int main(void){
    double A, B, C;
    double area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    area_triangulo = (A * C)/2;
    area_circulo = (3.14159 * pow(C,2));
    area_trapezio = ((A + B)/2) * C;
    area_quadrado = pow(B, 2);
    area_retangulo = A * B;

    printf("TRIANGULO: %.3f\n"
            "CIRCULO: %.3f\n"
            "TRAPEZIO: %.3f\n"
            "QUADRADO: %.3f\n"
            "RETANGULO: %.3f\n", area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo);


    return 0;
}