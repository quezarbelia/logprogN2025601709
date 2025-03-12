#include <stdio.h>

int main()
{
    const int cu=12;
    const double isr=.1, Pp=.5;
    int pS, totc;
    double salB, salN, ISRper;
    printf("Ingrese el numero de paquetes realizados esta semana: ");
    scanf("%d", &pS);
    salB=pS*Pp;
    ISRper=salB*isr;
    salN=salB-ISRper;
    totc=pS*cu;
    printf("Total de paquetes: %d.\nSalario Bruto: $ %.2f\nISR: $ %.2f\nSalario Neto: $ %.2f\nTotal de cucharas: %d",pS,salB,ISRper,salN,totc);
    return 0;
}
