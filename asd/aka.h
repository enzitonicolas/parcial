
typedef struct{
    char nombre[51];
    int codigo;
    int cantidad;
    float importe;
}eProducto;

typedef struct{
    int codigo;
    char nombre[51];
}eProvedoor;

typedef struct{
    int codigoProduc;
    int codigoProvee;
}pIOLA;

int menu(void);

int validarMenu(char valorMenu[]);

int agregarProducto(eProducto producto[], eProvedoor proveedor[], pIOLA codigos[]);

int modificarProducto(eProducto producto[], eProvedoor proveedor[], pIOLA codigos[]);
