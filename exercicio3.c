#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int l = 5, c = 5, i, j, cont = 1;
    float mat[l][c], cubo[l][c];

    for (i = 0; i < l; i++)
    {

        for (j = 0; j < c; j++)
        {

            printf("Informe o %d° elemento", cont);
            scanf("%f", &mat[i][j]);
            cont++;
        }
    }

    for (i = 0; i < l; i++)
    {

        for (j = 0; j < c; j++)
        {

            cubo[i][j] = (mat[i][j] * mat[i][j]) * mat[i][j];
        }
    }

    printf("MATRIZ CUBO:\n");
    for (i = 0; i < l; i++)
    {

        for (j = 0; j < c; j++)
        {

            printf("%.2f ", cubo[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}