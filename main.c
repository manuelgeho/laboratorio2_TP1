#include <stdio.h>
#include <stdlib.h>
#define M 50



/**
1. Se tiene un arreglo de números enteros positivos. Se desea obtener el promedio de sus valores. Para ello se debe:
a. Hacer una función que inicialice las celdas del arreglo en –1.
b. Hacer una función que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.
c. Hacer una función que sume el contenido del arreglo y lo retorne.
d. Hacer una función que cuente la cantidad de valores ingresados.
e. Hacer una función que reciba como parámetro el arreglo ya cargado, calcule y retorne el valor promedio
usando las funciones anteriores (c y d).
f. Hacer la función main correspondiente.

**/

///prototipados

void inicializacion(int[]);
void cargaDeArreglo(int[], int*);
int suma_y_retorno (int[], int);
int cuenta_valores (int[], int);
float promedio (int[], int);
void muestra (int[], int);




///instrucciones
void inicializacion(int arreglo[])
{
    *(arreglo-1);
}
void cargaDeArreglo(int arreglo[], int* validos)
{
    char continuar;
    int i = 0;


    do
    {
        printf("Ingrese numero para posicion [%i]:\t", i);
        scanf("%i", &arreglo[i]);
        printf("Desea continuar la carga?(s/n)\t");
        fflush(stdin);
        scanf("%c", &continuar);
        i++;
    }
    while (i<M && (continuar == 's'||continuar == 'S'));

    *validos = i;

    printf("Validos = %i", i);
}
int suma_y_retorno (int arreglo[M], int validos)
{
    int j = 0;
    int i = 0;

    for(i; i<validos; i++)
    {
        j = j + arreglo[i];
    }
    printf("Sumatoria: %i", j);

    return j;

}
int cuenta_valores (int arreglo[M], int validos)
{

    int i;
    i = validos;

    return i;
}
float promedio (int arreglo [M], int validos)
{
    float promedio = 0;
    int suma;
    int cantidad;

    suma = suma_y_retorno(arreglo, validos);
    cantidad = cuenta_valores(arreglo, validos);

    promedio = (float)suma/cantidad;
    printf("Promedio: %.2f", promedio);

    return promedio;
}
void muestra (int arreglo[], int validos)
{

    for (int j = 0; j < validos ; j++)
    {
        printf("arreglo[%i]: %i ", j, arreglo[j]);
    }
}


int main()
{
    int arreglo[M];
    int validos;
    int sumatoria, cantidad;
    float prom;


    inicializacion(arreglo);
    cargaDeArreglo(arreglo, &validos);
   // muestra(arreglo, validos);
    sumatoria = suma_y_retorno(arreglo, validos);
    cantidad = cuenta_valores(arreglo, validos);
    prom = promedio(arreglo, validos);

    printf("El promedio del arreglo es de: %.2f",prom);



    return 0;
}
