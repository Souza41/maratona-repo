#include <stdio.h>

int main(void){
    int lanche, qtd;
    double total = 0;

    scanf("%d %d", &lanche, &qtd);

    switch (lanche)
    {
    case 1:
        total = 4 * qtd;
        break;
    case 2:
        total = 4.5 * qtd;
        break;
    case 3:
        total = 5 * qtd;
        break;
    case 4:
        total = 2 * qtd;
        break;
    case 5:
        total = 1.5 * qtd;
        break;
    
    default:
        break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}