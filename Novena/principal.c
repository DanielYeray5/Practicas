#include <stdio.h>

int main(){
    int arreglo[100];
    int i = 0;
    int contador = 2;

    while (i < 100){
        arreglo[i] = contador ;
        printf("%d \n", arreglo[i]);
        contador +=2;
        i++;
    }
    
    return 0;
}