#include <stdio.h>
#include <math.h>

int main(){
    double diametro, altura, r, v;
    const double Pi = 3.1416;

    printf("Intrduzca el díametro en metros ");
    scanf("%lf", &diametro);
    printf("Introduzca la altura en metros ");
    scanf("%lf", &altura);

    r = diametro/2;
    v = Pi * pow(r,2) * altura;
    printf("El volumen del cilindro es de %lf metros cubicos", v );
    return 0;
}