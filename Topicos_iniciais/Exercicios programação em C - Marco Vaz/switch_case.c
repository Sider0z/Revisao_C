#include<stdio.h>

int main()
{

    int controle;

    printf("digite um número de 1 a 4: ");
    scanf(" %d", &controle);

    switch(controle)
    {
        
    case 1 :
        printf("Voce selecionou a opcao %d", controle);

    break;

    case 2:
        printf("Voce selecionou a opcao %d", controle);
        break;

    case 3:

        printf("Voce selecionou a opcao %d", controle);
        break;

    case 4: 
        printf("Voce selecionou a opcao %d", controle);
        break;

    default:
    printf("Você digitou um número diferente de 1, 2, 3 ou 4 --> %d", controle);
    }
}