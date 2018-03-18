#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, resto;

    printf("Digite o valor desejado: ");
    scanf("%i", &numero);
    i = 1;

    while(i < numero)
    {
        resto = i%9;
        if(resto==0)
        {
            resto = i%2;
            if(resto==0)
            {
                printf("%i\n",i);
            }

        }
        i = i+1;
    }


    return 0;

}
