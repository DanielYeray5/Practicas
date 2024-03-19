#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "\nIntroduzca el primer numero (entero): ", 163 );
    scanf( "%d", &n1 );
    printf( "\nIntroduzca el segundo numero (entero): ", 163 );
    scanf( "%d", &n2 );

    if ( n1 > n2 )
        printf( "\nEl %d es mayor.", n1 );
    else

        if ( n1 < n2 )
            printf( "\nEl %d es mayor.", n2 );
        else
            printf( "\nSON IGUALES" );

    return 0;
}
