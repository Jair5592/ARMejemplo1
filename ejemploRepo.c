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