#include <stdio.h>

int main(){
    int numero, multiplicador = 0;
    printf("Ingresa un numero");
    scanf("%d",&numero);
    printf("Tabla de multiplicar de %d en orden ascendente:\n", numero);

    while (multiplicador <= 1000)
    {
        printf("%d x %d = %d \n", numero, multiplicador, numero * multiplicador);
        multiplicador ++;
    }
    printf("Tabla de multimplicar de %d en orden descendente: \n", numero);
    multiplicador = 1000;
    while (multiplicador >= 0)
    {
        printf("%d x %d = %d \n", numero, multiplicador, numero * multiplicador);
        multiplicador --;
    }
    return 0;
    
}


/*int main(){
    float precio1;
    int cliente;
    float descuento,descuento2;
    printf("Introduce la cantidad deseada ");
    scanf("%f",&precio1);
    printf("¿Eres cliente? (1 es si, 0 es no) ");
    scanf("%d",&cliente);
    (cliente == 1) ? printf("El precio con descuento es de: %f", precio1-(precio1*0.20)) : printf("El precio con descuento es de: %f", precio1- (precio1*0.05));
}

int main(){
    float ladoUno, ladoDos, ladoTres;
    puts("Ingresa un lado");
    scanf("%f", &ladoUno);
    puts("Ingresa otro lado ");
    scanf("%f", &ladoDos);
    puts("Ingresa el ultimo lado ");
    scanf("%f", &ladoTres);

    if (ladoUno != ladoDos & ladoUno != ladoTres){
        printf("El triangulo es rectangulo");
    }else
    {
        printf("El triangulo no es rectangulo");
    }

    
int main(){
    float circuloUno, circuloDos, circuloTres;

    printf("Ingresa el radio del primer circulo ");
    scanf("%f", &circuloUno);
    printf("Ingresa el radio del segundo circulo ");
    scanf("%f", &circuloDos);
    printf("Ingresa el radio del tercer circulo ");
    scanf("%f", &circuloTres);

    float PI = 3.1416;
    float resultado1, resultado2, resultado3;
    
    resultado1 = PI * (circuloUno*circuloUno);
    resultado2 = PI * (circuloDos*circuloDos);
    resultado3 = PI * (circuloTres*circuloTres);

    printf("El area del circulo 1 es de: %2f\n ", resultado1);
    printf("El area del circulo 2 es de: %2f\n ", resultado2);
    printf("El area del circulo 3 es de: %2f\n ", resultado3);

}
}
*/