#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n, i, j, valor = 1, cont = 1,melhorMedia=0;

    printf("informe a quantidade de alunos da universidade\n");
    scanf("%d",&n);

    int mat[n][4];

    

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 4; j++)
        {
         
            if (j == 0)
            {

                printf("Informe a sua matricula %d° aluno(a)\n", cont);
                scanf("%d",&mat[i][j]);
            }

            if (j == 1)
            {

                printf("Informe o seu sexo (0 OU 1) %d° aluno(a):\n", cont);
                scanf("%d",&mat[i][j]);
            }

            if (j == 2)
            {

                printf("Informe o seu numero do curso %d° aluno(a)\n", cont);
                scanf("%d",&mat[i][j]);
            }

            if (j == 3)
            {

                printf("Informe a sua media geral no curso %d° aluno(a)\n", cont);
                scanf("%d",&mat[i][j]);
            }

            

            
            
        }
        cont++;
        printf("\n");
    }
    

    printf("\n");
    printf("INFORMAÇÕES DO ALUNOS:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ",mat[i][j]);
          if(mat[i][2]==153 && mat[i][3]>=melhorMedia) {

            melhorMedia=mat[i][3];

          }  
        }
        printf("\n");
    }

    printf("\n");
    printf("INfomações do aluno(a) que obteve a melhor media:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if(mat[i][2]==153 && mat[i][3]==melhorMedia){

                printf("%d ",mat[i][j]);
            }
            
        }
        printf("\n");
    }

    

    return EXIT_SUCCESS;
}