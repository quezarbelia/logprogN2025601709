#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso, indice;
    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    if(altura>100)
    {
        altura=altura/100;
    }
    printf("Ingrese su peso: ");
    scanf("%f", &peso);
    system("cls");
    indice=peso/pow(altura,2);
    printf("Indice de masa corporal: %.2f \n", indice);
    if(indice>=40)
    {
        printf("Obesidad clase 3\n\n");
    }
    else if(indice>=35)
    {
        printf("Obesidad clase 2\n\n");
    }
    else if(indice>=30)
    {
        printf("Obesidad clase 1\n\n");
    }
    else if(indice>=25)
    {
        printf("Sobrepeso\n\n");
    }
    else if(indice>=18.5)
    {
        printf("Normal\n\n");
    }
    else
    {
        printf("Bajo en peso\n\n");
    }
    return 0;
}
