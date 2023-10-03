#include <stdio.h>
#include <limits.h>

int main()
{
    int valores[10], valorMenor = INT_MAX, valorMaior = INT_MIN; 

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] < valorMenor)
        {
            valorMenor = valores[i]; 
        }
        if (valores[i] > valorMaior)
        {
             valorMaior = valores[i]; 
        }
    }
    printf("\nO menor numero e: %d", valorMenor);
    printf("\nO maior numero e: %d", valorMaior);

    return 0;
}
