#include <stdio.h>

int main() {
    int segundos, días, horas, minutos;

    puts("Ingrese el número de segundos: ");
    scanf("%d", &segundos);

    // Número de días
    días = segundos / 86400;
    segundos %= 86400;

    // Número de horas
    horas = segundos / 3600;
    segundos %= 3600;

    // Número de minutos
    minutos = segundos / 60;
    segundos %= 60;

    // Imprimir el número de días, horas, minutos, y segundos
    printf("%d segundos es igual a %d días, %d horas, %d minutos, y %d segundos\n",
        segundos, días, horas, minutos, segundos);

    return 0;
}