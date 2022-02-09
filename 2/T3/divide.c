#include "cabeçalhos.h"

void divide(int dificuldade)
{
    int a, b;
    int i,r;


        a = geranumero(semente(), 1, 10 + dificuldade);
        b = geranumero(semente() * semente(), 1, 10 + dificuldade);
        printf("Resultado da Divisão Inteira e Resto de %d / %d = ?\n ", a, b);
        scanf("%d" "%d", &i,&r);

        while (i != (a / b) && r != (a % b))
        {
            resposta(3, 5);
            printf("Resultado da Divisão Inteira e Resto de %d / %d = ?\n ", a, b);
            scanf("%d" "%d", &i,&r);
        }

            resposta(0, 2);
            return;


}