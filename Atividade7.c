#include<stdio.h>

int main(){
    int valores[10], maiorElemento = 0, posicaoMaior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > maiorElemento)
        {
            maiorElemento = valores[i];
            posicaoMaior = i;
        }
    }

    printf("O maior elemento e: %d\n", maiorElemento);
    printf("Ele esta na posicao: %d\n", posicaoMaior);

    return 0;
}
