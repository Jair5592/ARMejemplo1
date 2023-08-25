#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numerosBurbuja[100];

    for(int i = 1; i < 100; i++)
    {
        numerosBurbuja[i] = rand() % 100;
        printf("%d", numerosBurbuja[i]);
    }
    return 0;
}