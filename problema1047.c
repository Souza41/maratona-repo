#include <stdio.h>

int main(void){
    int hora_inicial, minuto_inicial, hora_final, minuto_final, minutos_total;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    minuto_inicial = minuto_inicial + (hora_inicial * 60);

    minuto_final = minuto_final + (hora_final * 60);

    for(int i = 1; i <= (24 * 60); i++){
        minuto_inicial++;

        if (minuto_inicial==(24 * 60))  minuto_inicial = 0;

        if(minuto_inicial == minuto_final) minutos_total = i;
        
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", minutos_total/60, minutos_total % 60);

    return 0;
}