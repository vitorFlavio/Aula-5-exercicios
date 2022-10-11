#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int l = 4, c = 3, i, j, cont = 1, k, maiorK = 0;
    int mat[l][c];

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("Informe o %d° elemento\n", cont);
            scanf("%d", &mat[i][j]);
            cont++;
        }
    }

    printf("Matriz 4x3:z\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Informe um valor K\n");
    scanf("%d", &k);

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (mat[i][j] > k)
            {

                maiorK++;
            }
        }
    }
    printf("Quantidade de elementos da matriz maior que k: %d", maiorK);

    return EXIT_SUCCESS;
}