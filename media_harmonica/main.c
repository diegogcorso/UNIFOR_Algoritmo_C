#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara��o de vari�veis
    int N, i;
    float mediaharmonica, res;

    //inicializa��o da vari�vel N
    printf("Total de elementos: ");
    scanf("%d", &N);

    //fun��o para limpar o buffer de entrada
    fflush(stdin);

    //tranformando N em vetor para entrar no la�o de repeti��o
    float vetor[N];

    //iniciando o la�o
    for (i = 1 ; i <= N ; i++){
        printf("Elemento %i: ", i);
        scanf("%f",&vetor[i]);
        res += 1/(vetor[i]);
    }

    printf("Media harm�nica: %.2f", mediaharmonica = N/res);
    return 0;
}
