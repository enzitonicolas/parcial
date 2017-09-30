#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "aka.h"

#define CANT 2
int main()
{
    eProducto producto[CANT];
    eProvedoor proveedor[CANT];
    pIOLA codigos[CANT];
    int opcion;
    char seguir = 's';


    printf("DESEA HACER ALGO?");
    scanf("%c", &seguir);
    system("cls");
    while(seguir != 'n')
    {
    opcion = menu();
    switch(opcion)
    {
        case 1:
            agregarProducto(producto,proveedor,codigos);
            break;
        case 2:
            modificarProducto(producto,proveedor,codigos);
            break;
        case 6:
            seguir = 'n';
            break;
    }
    }


    getch();
    return 0;
}
