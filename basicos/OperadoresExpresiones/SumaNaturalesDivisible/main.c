#include <stdio.h>

/*
 * Escribe un programa que calcule y muestre por pantalla la suma de los números naturales
 * divisibles entre 3 y 5, hasta un límite introducido por el usuario.
 */

int main(void) {
    bool divisible_by_3_and_5;
    int suma = 0, maximo = 0;

    printf("Este programa muestra por pantalla la suma de todos los numeros ");
    printf("divisibles entre 3 y 5 hasta el limite que le indiques.\n");
    printf("Por favor, introduce el limite maximo: ");
    scanf("%i", &maximo);

    for (int i = 1; i <= maximo; i++) {
        divisible_by_3_and_5 = (i % 3 == 0) && (i % 5 == 0);
        if (divisible_by_3_and_5) {
            suma += i;
        }
    }

    printf("La suma total hasta %d es %d", maximo, suma);
    return 0;
}
