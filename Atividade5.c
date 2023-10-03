#include <stdio.h>

int main()
{
    int valores[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero");
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] % 2 == 0)
        {
            printf("\n%d", valores[i]);
        }
    }
}
