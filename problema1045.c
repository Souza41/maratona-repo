#include <stdio.h>
#include <math.h>

int main(void){
    double lados[3], swap;

    scanf("%lf %lf %lf", &lados[0], &lados[1], &lados[2]);

    for(int i = 0; i < 3; i++){
        if(lados[i] < lados[i + 1]){
            swap = lados[i];
            lados[i] = lados[i + 1];
            lados[i + 1] = swap;
            i = -1;
        }
        
    }

    if(lados[0] >= lados[1] + lados[2]) {
        
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if((pow(lados[0], 2)) == ((pow(lados[1], 2)) + (pow(lados[2] ,2)))) printf("TRIANGULO RETANGULO\n");
    if(pow(lados[0], 2) > ((pow(lados[1], 2)) + (pow(lados[2] ,2)))) printf("TRIANGULO OBTUSANGULO\n");
    if(pow(lados[0], 2) < ((pow(lados[1], 2)) + (pow(lados[2] ,2)))) printf("TRIANGULO ACUTANGULO\n");
    if(lados[0] == lados[1] && lados[1] == lados[2]) printf("TRIANGULO EQUILATERO\n");
    if(lados[0] == lados[1] && lados[1] != lados[2] || lados[1] == lados[2] && lados[0] != lados[2]) printf("TRIANGULO ISOSCELES\n");


    return 0;
    
}