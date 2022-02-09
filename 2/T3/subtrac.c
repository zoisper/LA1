#include "cabeçalhos.h"

void subtrac(int dificuldade)
{
    int a, b, c;


    a = geranumero(semente(), 1, 10 + dificuldade);
    b = geranumero(semente() * semente(), 1, 10 + dificuldade);
    printf("%d - %d = ? \n", a, b);
    scanf("%d", &c);
    while (c != a-b)
    {
        resposta(3, 5);
        printf("%d - %d = ? \n", a, b);
        scanf("%d", &c);



    }

    resposta(0, 2);
    return;

}
