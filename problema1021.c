#include <stdio.h>
#include <math.h>

int main(void){
    float valor, restante;
    int notas[6], moedas[6];
    
    scanf("%f",&valor);
    
    notas[0] = valor/100;
    restante = fmod(valor, 100);
    notas[1] = restante/50;
    restante = fmod(restante, 50);
    notas[2] = restante/20;
    restante = fmod(restante, 20);
    notas[3] = restante/10;
    restante = fmod(restante, 10);
    notas[4] = restante/5;
    restante = fmod(restante, 5);
    notas[5] = restante/2;
    restante = fmod(restante, 2);
    moedas[0] = restante;
    restante = fmod(restante, 1);
    moedas[1] = restante/0.5;
    restante = fmod(restante, 0.5);
    moedas[2] = restante/0.25;
    restante = fmod(restante, 0.25);
    moedas[3] = restante/0.10;
    restante = fmod(restante, 0.10);
    moedas[4] = restante/0.05;
    restante = fmod(restante, 0.05) + 0.001;
    moedas[5] = restante/0.01;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas[0]);
    printf("%d nota(s) de R$ 50.00\n", notas[1]);
    printf("%d nota(s) de R$ 20.00\n", notas[2]);
    printf("%d nota(s) de R$ 10.00\n", notas[3]);
    printf("%d nota(s) de R$ 5.00\n", notas[4]);
    printf("%d nota(s) de R$ 2.00\n", notas[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas[0]);
    printf("%d moeda(s) de R$ 0.50\n", moedas[1]);
    printf("%d moeda(s) de R$ 0.25\n", moedas[2]);
    printf("%d moeda(s) de R$ 0.10\n", moedas[3]);
    printf("%d moeda(s) de R$ 0.05\n", moedas[4]);
    printf("%d moeda(s) de R$ 0.01\n", moedas[5]);
    
    return 0;

}
