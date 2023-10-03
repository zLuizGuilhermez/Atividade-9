#include<stdio.h>

int main(){
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um numero");
        scanf("%d", &valores[i]);
    }
    for (int i = 5; i > 0 ; i--)
    {
        if (valores[i] % 2 == 0 )
        {
        printf("\n%d", valores[i]);
        }
        
    }
    
    
}
