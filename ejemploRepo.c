#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numerosBurbuja[100];

    printf("Arreglo inicial para burbuja: \n");

    for(int i = 1; i < 100; i++)
    {
        numerosBurbuja[i] = rand() % 100;
        printf("%d", numerosBurbuja[i]);
    }

    printf("\n");

    int numerosInsercion[100];

    printf("Arreglo inicial para insercion: \n");

    for(int i = 1; i < 100; i++)
    {
        numerosInsercion[i] = rand() % 100;
        printf("%d", numerosInsercion[i]);
    }
    printf("\n");

    printf("Ordenamiento burbuja: \n");
    clock_t inicioBurbuja = clock();
    //Aquí se ejecutará el algoritmo burbuja.

    clock_t finBurbuja = clock();
    double tiempoBurbuja = (double)(finBurbuja - inicioBurbuja) / CLOCKS_PER_SEC;

    printf("Ordenamiento insercion: \n");
    clock_t inicioInsercion = clock();
    //Aquí se ejecutará el algoritmo insercion.

    clock_t finInsercion = clock();
    double tiempoInsercion = (double)(finInsercion - inicioInsercion) / CLOCKS_PER_SEC;

    return 0;
}