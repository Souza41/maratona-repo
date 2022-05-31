#include <stdio.h>

int main(void){
    int idade, anos, meses, dias;

    scanf("%d", &idade);
    
    anos = idade / 365;
    meses = idade % 365;
    meses = meses / 30;
    dias = idade - meses * 30 - anos * 365;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}