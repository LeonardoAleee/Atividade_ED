#include<stdio.h>

int main()
{
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0)
    {
        printf("Ano bissexto!\n");
    }
    else if(ano % 400 == 0)
    {
        printf("Ano bissexto!\n");
    }
    else
        printf("Ano comum!\n");

    return 0;
}