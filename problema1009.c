#include <stdio.h>

int main(void){
    char nome[60];
    double salario_fixo, vendas, total;

    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas);

    total = (vendas * 0.15) + salario_fixo;

    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}