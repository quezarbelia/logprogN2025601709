#include <stdio.h>
#include <math.h>

int main()
{
    int L=2;
    double AC, Ati, Ato, hti, cato, hto, AR, at, pt;

    //cuadrado
    AC=pow(L,2);
    //triangulos isoceles
    hti=sqrt((pow(L,2))+(pow(L,2)));
    Ati=L*L/2.0;
    //triangulo rectangulo
    cato=3/2.0*L;
    hto=sqrt(pow(cato,2)+pow(L,2));
    Ato=L*cato/2;
    //Rectangulo
    AR=2*L*(1/4.0*L);

    at=AC+2*Ati+Ato+AR;
    pt=3*L+(2*1/4.0*L)+2*hti+cato+hto;
    printf("El valor del area total es de: %.2f\nEl valor del perimetro total es de: %.2f\n\n",at,pt);
    return 0;
}
