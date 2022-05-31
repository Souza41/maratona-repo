#include <stdio.h>

int main(void){
    int hora_inicial, hora_final;

    scanf("%d %d", &hora_inicial, &hora_final);

    for(int i = 1; i <= 24; i++){
        hora_inicial++;
        if (hora_inicial==24)
        {
            hora_inicial = 0;
        }
        if(hora_inicial == hora_final){
            printf("O JOGO DUROU %d HORA(S)\n", i);
        }
        
    }
    return 0;
}