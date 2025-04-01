#include <stdio.h>

/*
 * Solicitar dos números al usuario y mostrar por pantalla el resultado de realizar las 4 operaciones
 * matemáticas básicas.
 */


int main(void) {
    // Declaración de variables:
    int num1, num2;

    // Solicitud de datos al usuario:
    printf("Introduce un numero: ");
    scanf("%d", &num1);
    printf("Introduce otro numero: ");
    scanf("%d", &num2);

    // Salida de datos:
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0)
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    else
        printf("No se puede dividir por cero");

    return 0;
}