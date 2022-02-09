#include <assert.h>
#include <stdbool.h>



void testapeso (float peso)
{
assert( peso >= 40 == true && "Peso muito baixo");
assert( peso <= 130 == true && "Peso muito elevado" );

}

void testaaltura (float altura)
{
    assert( altura >= 1.4 == true && altura <= 2);
}

void testaindice (float indice)

{
    assert ( indice >= 10 && indice <= 66 );
}


#include <stdio.h>
#include <string.h>

void testaidade(int idade)
{

    assert (idade >= 18 && idade <= 65);


}

void calculapercentil (int indice, char percentil[])
{
char s[6][30] = {"Muito abaixo do peso", "Abaixo do peso", "Peso Normal", "Excesso de peso", "Obesidade", "Super Obesidade"  };
if (indice < 16 )
   strcpy (percentil, s[0]);
if (indice <19 && indice >=16)
    strcpy (percentil, s[1]);
if (indice <25 && indice >=19)
    strcpy (percentil, s[6]);
if (indice <30 && indice >=25)
    strcpy (percentil, s[3]);
if (indice <35 && indice >=30)
    strcpy (percentil, s[4]);
if (indice >30)
    strcpy (percentil, s[5]);

}