#include <stdio.h>

int main()
{
    int valores[10], somaTotal = 0, valoresNegativos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um numero");
        scanf("%d", &valores[i]);
        if (valores[i] > 0)
        {
            somaTotal += valores[i];
        }
        if (valores[i] < 0)
        {
            valoresNegativos++;
        }
    }
    printf("\nA soma e: %d", somaTotal);
    printf("A quantide de numeros negativos e: %d", valoresNegativos);
}
