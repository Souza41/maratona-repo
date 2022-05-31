#include <stdio.h>

int main(void){
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, exame, media;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10;

    if (media >= 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media < 7 && media >= 5 ){
        scanf("%f", &exame);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);
        if (media >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        media = (media + exame)/2;
        printf("Media final: %.1f\n", media);
        
    }
    else{
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    

    return 0;

}