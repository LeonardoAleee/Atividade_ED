#include<stdio.h>

int main()
{
    float massa, altura, IMC;
    
    printf("Digite a sua massa (em kg): ");
    scanf("%f", &massa);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    IMC = massa / (altura * altura);
    printf("IMC: %f\n", IMC);

    if(IMC < 17)
    {
        printf("Muito abaixo do peso.\n");
    }
    else if (IMC >= 17 && IMC < 18.5)
    {
        printf("Abaixo do peso.\n");
    }
    else if (IMC >= 18.5 && IMC < 25)
    {
        printf("Peso normal.\n");
    }
    else if (IMC >= 25 && IMC < 30)
    {
        printf("Acima do peso.\n");
    }
    else if (IMC >= 30 && IMC < 35)
    {
        printf("Obesidade.\n");
    }
    else if (IMC >= 35 && IMC < 40)
    {
        printf("Obesidade severa.\n");
    }
    else
        printf("Obesidade mórbida.\n");

    return 0;
}