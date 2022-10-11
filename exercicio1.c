#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i, j, cont = 1;
    int mat[4][3];

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("Informe o %d° elemento", cont);
            scanf("%d", &mat[i][j]);
            cont++;
        }
    }

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}