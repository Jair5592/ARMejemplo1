#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inversion (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenamientoBurbuja(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            printf("Comparando %d con %d: \n", arr[j], arr[j + 1]);
            if(arr[j] > arr[j + 1])
            {
                inversion(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void ordenamientoInsercion(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int valorActual = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > valorActual)
        {
            printf("Comparando %d con %d \n", arr[j], valorActual);
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = valorActual;
    }
}

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

    int n = sizeof(numerosBurbuja) / sizeof(numerosBurbuja[0]);

    printf("Ordenamiento burbuja: \n");
    clock_t inicioBurbuja = clock();
    //Aquí se ejecutará el algoritmo burbuja.
    ordenamientoBurbuja(numerosBurbuja, n);
    clock_t finBurbuja = clock();
    double tiempoBurbuja = (double)(finBurbuja - inicioBurbuja) / CLOCKS_PER_SEC;

    printf("Ordenamiento insercion: \n");
    clock_t inicioInsercion = clock();
    //Aquí se ejecutará el algoritmo insercion.

    clock_t finInsercion = clock();
    double tiempoInsercion = (double)(finInsercion - inicioInsercion) / CLOCKS_PER_SEC;

    return 0;
}