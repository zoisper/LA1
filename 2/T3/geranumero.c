#include "cabeçalhos.h"

long semente ()
{
    long ultime;
    time(&ultime);
    return  ultime;
}


int geranumero (long u, int i, int s)

{
    srand(u);
    return ((rand() % (s-i+1)) + i) ;
}
