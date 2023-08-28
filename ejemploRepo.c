#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inversion (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
    return 0;
}