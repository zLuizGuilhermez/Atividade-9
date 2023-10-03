#include<stdio.h>

int main(){
    float nota[15],notaFinal = 0,mediaFinal = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota");
        scanf("%f", &nota[i]);
        notaFinal += nota[i];
    }
    mediaFinal = notaFinal / 15;
    printf("A media de nota da turma e:%0.2f", mediaFinal);

    
    
}
