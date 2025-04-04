#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    printf("B I E N V E N I D O\n\nSeleccione el tipo de pizza:\n- Vegetariana(1)\n- No vegetariana(2)\n");
    scanf("%d", &opc);
    system("cls");
    switch(opc)
    {
    case 1:
        printf("Seleccione su ingrediente\n- Pimiento(1)\n- Tofu(2)\n");
        scanf("%d", &opc);
        system("cls");
        switch(opc)
        {
        case 1:
            printf("BUENA ELECCION:\n");
            printf("Pizza vegetariana con pimineto");
            break;
        case 2:
            printf("BUENA ELECCION:\n");
            printf("Pizza vegetariana con tofu");
            break;
        default:
            printf("Opcion ilogica");
            break;
        }
        break;
    case 2:
        printf("Seleccione su ingrediente\n- Peperoni(1)\n- Jamon(2)\n-Salmon(3)\n");
        scanf("%d", &opc);
        system("cls");
        switch(opc)
        {
        case 1:
            printf("BUENA ELECCION:\n");
            printf("Pizza de peperoni");
            break;
        case 2:
            printf("BUENA ELECCION:\n");
            printf("Pizza de jamon");
            break;
        case 3:
            printf("BUENA ELECCION:\n");
            printf("Pizza de salmon");
            break;
        default:
            printf("Opcion ilogica");
            break;
        }
        break;
    default:
        printf("Opcion ilogica");
        break;
    }
    printf("\n\n");
    return 0;
}
