#include "cabeçalhos.h"

char *resposta (int i, int s)

{
    char *r[30] = {"Optimo!", "Belo Trabalho!", "Continue Assim!", "Errado, tente novamente.", "Não Desista!", "Não, tente mais uma vez."};
    int n;
    n = geranumero( semente(), i, s);
    printf ("%s\n", r[n]);


    return r[n];
}