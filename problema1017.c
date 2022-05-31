#include <stdio.h>

int main(void){
    int tempo_gasto, velocidade_media;

    double litros;

    scanf("%d", &tempo_gasto);
    scanf("%d", &velocidade_media);

    litros = ((float)tempo_gasto*velocidade_media)/12;

    printf("%.3f\n", litros);

    return 0;
}