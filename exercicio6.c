#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n, m, i, j, cont = 1, maiorValor = 0, menorValor = 0;

    printf("Informe o numero de linhas que deseja na matriz\n");
    scanf("%d", &n);
    printf("Informe o numero de colunas que deseja  na matriz\n");
    scanf("%d", &m);

    int mat[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Informe o %d° elemento\n", cont);
            scanf("%d", &mat[i][j]);
            cont++;
            if (i == 0 && j == 0)
            {

                maiorValor = mat[i][j];
                menorValor = mat[i][j];
            }
        }
    }

    printf("Matriz MxN:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            if (mat[i][j] >= maiorValor)
            {

                maiorValor = mat[i][j];
            }
            else if (mat[i][j] <= menorValor)
            {

                menorValor = mat[i][j];
            }
        }
    }
    printf("O maior valor é: %d\n", maiorValor);
    printf("O menor valor é: %d\n", menorValor);

    return EXIT_SUCCESS;
}