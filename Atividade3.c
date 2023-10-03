#include<stdio.h>

int main(){
    
    int conjuntoA[10], conjuntoB[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &conjuntoA[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
       conjuntoB[i] = conjuntoA[i] * conjuntoA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", conjuntoA[i]);
        printf("\n%d", conjuntoB[i]);
    }
    
    return 0;
}
