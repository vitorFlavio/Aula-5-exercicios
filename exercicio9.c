#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, m, i, j, soma, cont = 1;
    

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
        }
    }


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("%d ",mat[i][j]);

        }
        printf("\n");
    }


    cont=1;

    printf("\n");

    for (j = 0; j < m; j++)
    {
        soma = 0;
        for (i = 0; i < n; i++)
        {
            
            soma += mat[i][j];
        }

        printf("A soma da %d° coluna é: %d\n", cont, soma);
        cont++;
    }

    return 0;
}