#include <stdio.h>
#include <math.h>

int main()
{
    const int L=12;
    const double iva=.16, pm=9256;
    double aP, aT, hT, arT, pTB, IVA, pTN;

    aP=L*(1/2.0*L);
    hT=sqrt(pow(L,2)-(pow(1/2.0*L,2)/4));
    aT=((1/2.0*L))*hT/2;
    arT=aT+aP;
    pTB=arT*pm;
    IVA=pTB*iva;
    pTN=pTB+IVA;
    printf("El área del terreno: %.2f\nPrecio sin IVA: $ %.2f\nIVA: $ %.2f\nPrecio con IVA: $ %.2f\n\n",arT, pTB,IVA,pTN);
}
