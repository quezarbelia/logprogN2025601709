#include <stdio.h>

int main()
{
    const float COVER=500, DESC=0.25;
    int numMuj, numHom;
    float Total;

    //Entrada
    printf("Ingrese el numero de mujeres: ");
    scanf("%d",&numMuj);
    printf("Ingrese el numero de hombres: ");
    scanf("%d",&numHom);
    //Proceso
    Total=numHom*COVER+(numMuj*COVER-numMuj*COVER*DESC);
    //Salida
    printf("El total a pagar es de: %.2f\n\n",Total);
    return 0;
}
