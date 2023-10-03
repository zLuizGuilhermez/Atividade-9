#include<stdio.h>

int main(){
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um numero");
        scanf("%d", &valores[i]);
    }
    for (int i = 6; i > 0 ; i--)
    {
        printf("\n%d", valores[i]);
    }
    
    
}
