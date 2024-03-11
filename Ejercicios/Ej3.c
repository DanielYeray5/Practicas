#include <stdio.h>
int main() {
    double precio1, precio2, precio3, media;
//  Datos
    printf ("Introduzca el precio en establecimiento 1, en euros: ");
    scanf ("%lf", &precio1);
    printf ("Introduzca el precio en establecimiento 2, en euros: ");
    scanf ("%lf", &precio2);
    printf ("Introduzca el precio en establecimiento 3, en euros: ");
    scanf ("%lf", &precio3);
//Cálculo
    media = (precio1 + precio2 + precio3) / 3;
    printf ("El precio medio del producto es de %lf euros", media);
    return 0;
}