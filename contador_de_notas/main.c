#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, qtd, cont;

    printf("Digite a quantidade de alunos: \n");
    scanf("%f", &qtd);

    cont = 0;

    while(qtd > 0)
    {
        printf("Digite a nota do Aluno: ");
        scanf("%f", &nota);

        if(nota >= 50)
        {
            cont = cont+1;
        }

        qtd = qtd-1;
    }
    printf("O total de alunos aprovados é: %f", cont);
    return 0;
}
