#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int l = 7, c = 8, i, j;
    int mat[l][c];

    printf("Matriz 7x8:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {

            mat[i][j] = i + j;

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Exemplo:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Matriz[%d][%d]= %d\n", i, j, mat[i][j]);
        }
    }

    return EXIT_SUCCESS;
}