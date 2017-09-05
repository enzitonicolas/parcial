/**
 * \ CALCULADORA
 * \ ALUMNO: HERNAN GASTON FRANCO
 * \ DNI: 39664999
 * \ CURSO: CURSO: 1°F
 */

#define false 0
#define true 1

//FUNCION SUMAR.
int sumar(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}
//FUNCION RESTAR.
int restar(int a, int b)
{
    int resultado;
    resultado = a - b;
    return resultado;
}
//FUNCION DIVIDIR.
float dividir(float a, float b)
{
    float resultado;
    resultado = a / b;
    return resultado;
}
//FUNCION MULTIPLICAR.
int multiplicar(int a, int b)
{
    int resultado;
    resultado = a * b;
    return resultado;
}
//FUNCION FACTORIAL.
float factorial(float a)
{
    float resultado;
    if (a == 1)
    {
        return 1;
    }
    resultado = a * factorial(a - 1);
    printf("El factorial es: %.0f\n", resultado);
    return resultado;
}
//FUNCION VERIFICAR.
int verificacion(int a, int b)
{
    if(a == 0 || b == 0)
        return false;
    else
        return true;
}

//FUNCION CALCULAR SUMA Y VERIFICAR.
void calcuSuma(int a, int b)
{
    if(verificacion(a, b))
    {
        int resultado = sumar(a, b);
        printf("La suma total entre (A+B) es: %d\n", resultado);
    }
    else
    {
        printf("Ingrese el operando faltante.\n");
    }
}
// FUNCION CALCULAR RESTA VERIFICADA.
void calcuRestar(int a, int b)
{
    if(verificacion(a, b))
    {
        int resultado = restar(a, b);
        printf("La resta entre (A-B) es: %d\n", resultado);
    }
    else
    {
        printf("Ingrese el operando faltante.\n");
    }
}
//FUNCION CALCULAR DIVISION VERIFICADA.
void calcuDiv(float a, float b)
{
    if(verificacion(a, b))
    {
        float resultado = dividir(a, b);
        printf("La division entre (A/B) es: %.2f\n", resultado);
    }
    else
    {
        printf("Ingrese el operando faltante.\n");
    }
    if(b == 0)
    {
        printf("No se puede dividir por 0.\n");
    }
}
//FUNCION CALCULAR MULTIPLICACION VERIFICADA.
void calcuMulti(int a, int b)
{
    if(verificacion(a, b))
    {
        int resultado = multiplicar(a, b);
        printf("La multiplicacion entre (A*B) es: %d\n", resultado);
    }
    else
    {
        printf("Ingrese el operando faltante.\n");
    }
}

