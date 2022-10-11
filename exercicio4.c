#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int l=3,c=3,i,j,cont=1,soma=0;
    int mat[l][c];

    for(i=0;i<l;i++){

        for(j=0;j<c;j++){
            printf("Informe o %d° elemento",cont);
            scanf("%d",&mat[i][j]);
            cont++;
        }

    }
    
    printf("Diagonal da matriz 3x3:\n");

    for(i=0;i<l;i++){
        
        for(j=0;j<c;j++){
            
        if(i==j){

            printf("%d ",mat[i][j]);
            soma+=mat[i][j];

        }else if(i!=j){
            printf(" ");
        }
            
        }
        printf("\n");

    }
    printf("A soma dos elementos da diagonal principal é: %d",soma);


    return EXIT_SUCCESS;
}