#include <stdio.h>
#include <math.h>

int main()
{
    int L=7;
    double pt, at, Ca, Cp, Ra, ra, ca, pi=3.1416, l1, lb;
    //circulo
    Ca=(pi*pow((L/2.0),2))/2;
    Cp=(pi*L)/2;

    ra=((1/5.0)*L)*((3/5.0)*L);
    ca=pow((1/5.0)*L,2);
    Ra=pow(L,2);
    l1=L+(2*((1/5.0)*L));
    lb=L+4*(1/5.0*L);

    pt=Cp+2*l1+lb;
    at=Ca+2*ra+Ra+2*ca;
    printf("El valor del perimetro total es de: %.4f\nEl valor del area toal es de: %.4f\n\n",pt,at);
    return 0;
}
