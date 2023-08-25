#include <stdio.h>

int main()
{
    int num, i;
    int factorial = 1;
    int result = 10;

    printf("Ingrese un numero entero: ");

    do
    {
        if(result != 10)
        {
            printf("Ingresar un valor numerico valido: ");
        }
        result = scanf("%d", &num);
    } while (result != 1);

    if(num < 0)
    {
        printf("El numero debe ser mayor que cero. \n");
        return 1;
    }
    else if(num > 12)
    {
        printf("El numero debe ser menor que 12. \n");
        return 2;
    }
    else
    {
        for(i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("El factorial de %d es %d \n", num, factorial);
        return 0;
    }
    
}