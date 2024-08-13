#include <stdio.h>

int main(){
    int matriz[5][5], a = 0;

    // Llenado de la matriz con números secuenciales del 1 al 25
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            a++; // Incrementa 'a' en 1
            matriz[i][j] = a; // Asigna el valor de 'a' a la posición actual de la matriz
        }
    }

    // Impresión de la matriz en su forma original
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf(" %d", matriz[i][j]); // Imprime el valor de la matriz
            printf("\t"); // Tabulador para alinear la salida
        }
        printf("\n"); // Salto de línea al final de cada fila
    }

    // Impresión de la matriz con patrón alterno (zigzag)
    for(int j = 0; j < 5; j++){
        if(j % 2 == 0){ // Si la columna es par
            for(int i = 0; i < 5; i++){
                printf(" %d", matriz[i][j]); // Imprime de arriba hacia abajo
            }
        }
        else{ // Si la columna es impar
            for(int i = 4; i >= 0; i--){
                printf(" %d", matriz[i][j]); // Imprime de abajo hacia arriba
            }
        }
        printf("\n"); // Salto de línea después de imprimir cada columna
    }
    
    return 0; // Fin del programa
}
