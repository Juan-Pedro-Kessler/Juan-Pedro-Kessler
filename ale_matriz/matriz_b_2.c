#include <stdio.h>
int main(){
    int matriz[5][5], a=0;
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
    for(int j=0; j<5; j++){
        if(j%2==0){for( int i=0; i<5; i++){
            printf(" %d",matriz[i][j]);}}
        if(j%2!=0){for( int i=4; i>=0; i--){
            printf(" %d",matriz[i][j]);}}
    
        printf("\n");
        
        }
        
    return 0;
}