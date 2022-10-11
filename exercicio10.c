#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n, m, i, j, soma=0, cont = 1;
    float media=0;

    printf("Informe o numero de linhas que deseja na matriz\n");
    scanf("%d", &n);
    printf("Informe o numero de colunas que deseja  na matriz\n");
    scanf("%d", &m);

    int mat[n][m];

    printf("matriz NxM:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("Informe o %d° elemento\n", cont);
            scanf("%d", &mat[i][j]);
            cont++;
            soma+=mat[i][j];
        }
    }

    media=(float)soma/(float)(n*m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("A media dos valores da matriz é: %.2f",media);

 
    return EXIT_SUCCESS;
}