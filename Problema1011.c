#include <stdio.h>
#include  <math.h>

int main(void){
    double raio = 0, volume = 0;

    scanf("%lf", &raio);

    volume = 4.0/3 * 3.14159 * (pow(raio, 3));

    printf("VOLUME = %.3f\n", volume);

    return 0;
    

}