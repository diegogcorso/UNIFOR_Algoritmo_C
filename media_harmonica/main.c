#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variáveis
    int N, i;
    float mediaharmonica, res;

    //inicialização da variável N
    printf("Total de elementos: ");
    scanf("%d", &N);

    //função para limpar o buffer de entrada
    fflush(stdin);

    //tranformando N em vetor para entrar no laço de repetição
    float vetor[N];

    //iniciando o laço
    for (i = 1 ; i <= N ; i++){
        printf("Elemento %i: ", i);
        scanf("%f",&vetor[i]);
        res += 1/(vetor[i]);
    }

    printf("Media harmônica: %.2f", mediaharmonica = N/res);
    return 0;
}
