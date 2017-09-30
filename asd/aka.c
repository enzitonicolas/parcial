#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "aka.h"

#define CANT 2
int menu(void)
{
    char opcion[21];
    int resultado;
    printf("\n1- Ingresar producto\n2- Modificar\n3- Borrar\n4- Informar\n5- Lista\n6- Salir\n");
    printf("\n");
    printf("\nRespuesta: ");
    scanf("%s", opcion);
    resultado = validarMenu(opcion);
    return resultado;
}

int validarMenu(char valorMenu[])
{
    int tamanio;
    int valor;
    int flag = 0;
    int i;

    tamanio = strlen(valorMenu);

    for(i=0; i<tamanio; i++)
    {
        if(!isdigit(valorMenu[i]))
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\nERROR! NO ES UN NUMERO.\n");
        printf("\n");
        menu();

    }
    else
    {
        valor = atoi(valorMenu);
        if(valor < 1 || valor > 6)
        {
            printf("ERROR! La opcion ingresada no es correcta.\n");
            printf("\n");
            menu();
        }
    }
    return valor;
}

int agregarProducto(eProducto producto[], eProvedoor proveedor[], pIOLA codigos[])
{
    int i;

    for(i= 0; i < 2; i++)
    {
        printf("\n");
        printf("____PRODUCTO____\n");
        printf("\n");

        printf("Ingrese el nombre del producto: ");
        fflush(stdin);
        scanf("%[^\n]", producto[i].nombre);

        printf("Ingrese el codigo: ");
        scanf("%d", &codigos[i].codigoProduc);
        while(codigos[i].codigoProduc <= 0)
        {
            printf("ERROR! VUELVA A INGRESAR EL CODIGO.");
            printf("\nIngrese el codigo: ");
            scanf("%d", &codigos[i].codigoProduc);
            while(codigos[i].codigoProduc > 0)
            {
                printf("\nEl codigo es correcto!\n");
                break;
            }
        }

        printf("Ingrese la cantidad: ");
        scanf("%d", &producto[i].cantidad);

        printf("Ingrese el importe: ");
        scanf("%f", &producto[i].importe);

        printf("\n");
        printf("____PROVEEDOR____\n");
        printf("\n");

        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]", proveedor[i].nombre);

        printf("Ingrese el codigo: ");
        scanf("%d", &codigos[i].codigoProvee);
        while(codigos[i].codigoProvee <= 0)
        {
            printf("ERROR! VUELVA A INGRESAR EL CODIGO.");
            printf("\nIngrese el codigo: ");
            scanf("%d", &codigos[i].codigoProvee);
            while(codigos[i].codigoProvee > 0)
            {
                printf("\nEl codigo es correcto!\n");
                break;
            }
        }
        printf("SUBIDO CORRECTAMENTE!");
        printf("\n");

        break;
    }
    return 0;
}

int modificarProducto(eProducto producto[], eProvedoor proveedor[], pIOLA codigos[])
{
    int i, j, auxCodigo, flag = 0;
    printf("Ingrese el codigo del producto a modificar: ");
    scanf("%d", &auxCodigo);

    for(i = 0; i < CANT; i++)
    {
        while(auxCodigo != codigos[i].codigoProduc)
        {
            printf("\nEL PRODUCTO NO EXISTE!\n");
            printf("Por favor ingrese el codigo nuevamente: ");
            scanf("%d", &auxCodigo);
        }
        if(auxCodigo == codigos[i].codigoProduc)
        {
            printf("\nPRODUCTO ENCONTRADO!\n");
            printf("Producto: %s\nProveedor: %s\nCodigo del Proveedor: %d\nCantidad: %d\nImporte: %.2f",producto[i].nombre, proveedor[i].nombre, codigos[i].codigoProvee, producto[i].cantidad, producto[i].importe);
            printf("\n");
        }
        if(flag == 0)
        {
            printf("\nIngrese el nuevo nombre del producto: ");
            fflush(stdin);
            scanf("%[^\n]", producto[i].nombre);

            printf("\nIngrese el nuevo codigo del proveedor: ");
            scanf("%d", &codigos[i].codigoProvee);

            printf("\nIngrese la nueva cantidad de productos: ");
            scanf("%d", &producto[i].cantidad);

            printf("\nIngrese el nuevo importe del producto: ");
            scanf("%f", &producto[i].importe);
            printf("\n");
            break;
        }
    }
    for(j = 0; j<1 ;j++)
    {
        printf("\nNombre: %s", producto[i].nombre);
        printf("\nProveedor: %s", proveedor[i].nombre);
        printf("\nCodigo Proveedor: %d", codigos[i].codigoProvee);
        printf("\nCantidad de Productos: %d", producto[i].cantidad);
        printf("\nImporte: %.2f", producto[i].importe);
    }
    return 0;
}
