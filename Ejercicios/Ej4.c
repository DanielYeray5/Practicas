#include <stdio.h>

int main() {
    float precio, descuento, descuento_amount, precio_final;

    printf("Ingrese el precio: ");
    scanf("%f", &precio);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &descuento);

    descuento_amount = precio * (descuento / 100);

    precio_final = precio - descuento_amount;

    printf("El precio final con el descuento es: %.2f\n", precio_final);

    return 0;
}