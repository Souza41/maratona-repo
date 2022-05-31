#include <stdio.h>

int main(void){
    int codigo1, numero_pecas1;
    int codigo2, numero_pecas2;
    double valor1, valor2, total;

    scanf("%d %d %lf", &codigo1, &numero_pecas1, &valor1);
    scanf("%d %d %lf", &codigo2, &numero_pecas2, &valor2);

    total = (valor1 * numero_pecas1) + (valor2 * numero_pecas2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}