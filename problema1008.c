#include <stdio.h>

int main(void){
    int numero, horas_trabalhadas;
    double valor_hora, salario;

    scanf("%d", &numero);
    scanf("%d", &horas_trabalhadas);
    scanf("%lf", &valor_hora);

    salario = valor_hora * horas_trabalhadas;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}