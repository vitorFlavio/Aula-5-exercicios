#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i, j, cont = 1;
    float mat[5][5];

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)
        {
            printf("Informe o %d° elemento", cont);
            scanf("%f", &mat[i][j]);
            cont++;
        }
    }

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)
        {

            if (i == j)
            {
                printf("%.2f ", mat[i][j]);
            }
            else if (i != j)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}