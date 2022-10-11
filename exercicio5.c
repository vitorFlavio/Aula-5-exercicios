#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int l = 4, c = 8, i, j, cont = 1, soma = 0, valor = 1;
    int mat[l][c];

    printf("Matriz 4x8:\n");
    printf("\n");

    for (i = 0; i < l; i++)
    {

        for (j = 0; j < c; j++)
        {

            mat[i][j] = valor;
            printf("%d ", mat[i][j]);
            valor++;
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < l; i++)
    {

        for (j = 0; j < c; j++)
        {

            soma += mat[i][j];
        }
        printf("A soma dos elementos da %d° linha é: %d\n", cont, soma);
        cont++;
        soma = 0;
    }

    return EXIT_SUCCESS;
}