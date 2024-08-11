#include <stdio.h>
int main(){
    int matriz[5][5], a=0, columna_max=5, x;
    for(int i=0; i<5; i++){
        for( int j=0; j<5; j++){
            a++;
            matriz[i][j]=a;
        }
    }
    for(int i=0; i<5; i++){
        for( int j=0; j<5; j++){
            printf(" %d",matriz[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(int i=0; i<5; i++){
        for( int j=0; j<columna_max; j++){
            printf(" %d",matriz[i][j]);}
        for(int x=i+1; x<5; x++){
            printf(" %d",matriz[x][columna_max-1]);
        }
        printf("\n");
        columna_max--;
        }
        
    return 0;
}