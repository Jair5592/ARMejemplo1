#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t puertoB = 0b00000000;
    printf("El valor del puerto B es %d \n", puertoB);
    puertoB |= 0b00010000;
    printf("El valor del puerto B es %d \n", puertoB);
    puertoB |= 0b01100100;
    printf("El valor del puerto B es %d \n", puertoB);
    puertoB &= 0b10111011;
    printf("El valor del puerto B es %d \n", puertoB);
    puertoB |= (1<<7) | (1<<1);
    printf("El valor del puerto B es %d \n", puertoB);
    puertoB &= ~((1<<7) | (1<<1));
    printf("El valor del puerto B es %d \n", puertoB);

    return 0;
}