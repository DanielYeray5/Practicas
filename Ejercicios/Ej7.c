#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "\n   Introduzca el primer n%cmero (entero): ", 163 );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo n%cmero (entero): ", 163 );
    scanf( "%d", &n2 );

    if ( n1 > n2 )
        printf( "\n   El %d es mayor.", n1 );
    else

        if ( n1 < n2 )
            printf( "\n   El %d es mayor.", n2 );
        else
            printf( "\n   SON IGUALES" );

    getch(); /* Pausa */

    return 0;
}
