/* Programa: Color de un semáforo (Solución 1) */
#include <stdio.h>

int main(){
    int numero;

    printf("\n   Listado de colores de un sem%cforo:", 160);
    printf("\n\n   1. Rojo");
    printf("\n   2. Verde");
    printf("\n   3. Amarillo");
    printf("\n\n   Introduzca n%cmero de color: ", 163);

    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("\n   Rojo significa: \"No pasar\"");
        break;
    case 2:
        printf("\n   Verde significa: \"Adelante\"");
        break;
    case 3:
        printf("\n   Amarillo significa: \"Precauci%cn\"", 162);
        break;
    default:
        printf("\n   ERROR: %d, no esta asociado a ning%cn color.", numero, 163);
    }

    getch(); /* Pausa */

    return 0;
}