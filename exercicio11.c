#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int l = 3, c = 3, i, j, valor = 1;
    int mat[l][c], matInversa[c][l];

    printf("MATRIZ:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {

            mat[i][j] = valor;
            valor++;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ INVERSA:\n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < l; j++)
        {

            matInversa[i][j] = mat[j][i];

            printf("%d ", matInversa[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}