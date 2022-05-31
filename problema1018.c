#include <stdio.h>

int main(void){
    int valor, notas[7], restante;

    scanf("%d", &valor);
    restante = valor;
    notas[0] = restante/100;
    restante = restante % 100;
    notas[1] = restante/50;
    restante = restante % 50;
    notas[2] = restante/20;
    restante = restante % 20;
    notas[3] = restante/10;
    restante = restante % 10;
    notas[4] = restante/5;
    restante = restante % 5;
    notas[5] = restante/2;
    restante = restante % 2;
    notas[6] = restante/1;
    
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas[0]);
    printf("%d nota(s) de R$ 50,00\n", notas[1]);
    printf("%d nota(s) de R$ 20,00\n", notas[2]);
    printf("%d nota(s) de R$ 10,00\n", notas[3]);
    printf("%d nota(s) de R$ 5,00\n", notas[4]);
    printf("%d nota(s) de R$ 2,00\n", notas[5]);
    printf("%d nota(s) de R$ 1,00\n", notas[6]);
    return 0;

}