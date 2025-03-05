#include <stdio.h>
#include <math.h>

int main()
{
    int L=7;
    double pC,aC, hT, aT, aR, afR, at, pt;
    double rC=(3.0*L)/2;


    pC=2*M_PI*rC/2;
    aC=M_PI*pow(rC,2)/2.0;
    hT=sqrt(pow(3*L,2)+pow(L,2));
    aT=3*L*L/2.0;
    aR=3*L*L;
    afR=7*L;

    at=aC+2*aT+2*aR;
    pt=pC+2*hT+afR;

    printf("El valor del area total es de: %.4f\nEl valor de perimetro total: %.4f\n\n", at,pt);
    return 0;
}
