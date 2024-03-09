#include <stdio.h>

int main(){
    int turismo, todoterreno;
    int capTurismo,capTerrreno;
    int neceCompañia;

    printf("Numero de turismo: \n");
    scanf("%d",&turismo);
    printf("Introduce el numero de todoterreno: \n");
    scanf("%d", &todoterreno);
    printf("Intrduce la capacidad de los turismos(litros): \n");
    scanf("%d",&capTurismo);
    printf("Introduce la capacidad de los todoterrenos(litros):\n");
    scanf("%d", &capTerrreno);

    neceCompañia = turismo * capTurismo + todoterreno * capTerrreno;
    printf("Las necesidadees de combustible totales son(litros): %d", neceCompañia);
    return 0;
}