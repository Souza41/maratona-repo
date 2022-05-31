#include <stdio.h>

int  main(void){
    double salario, novo_salario;
    int reajuste;

    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400){
        novo_salario = salario + salario * 0.15;
        reajuste = 15;
    }
    else if(salario > 400 && salario <= 800){
        novo_salario = salario + salario * 0.12;
        reajuste = 12;
    }
    else if(salario > 800 && salario <= 1200){
        novo_salario = salario + salario * 0.1;
        reajuste = 10;
    }
    else if(salario > 1200 && salario <= 2000){
        novo_salario = salario + salario * 0.07;
        reajuste = 7;
    }
    else{
        novo_salario = salario + salario * 0.04;
        reajuste = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novo_salario, (novo_salario - salario), reajuste);

    return 0;
}