#include <stdio.h>

int main()
{
    int x,y;
    x=2;
    y=4;
    double z=1/((double)x)+(x+y)/3.0+2*((double)x/y);
    printf("El valor de z es: %f", z);
    return 0;
}
