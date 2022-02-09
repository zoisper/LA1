#include <stdio.h>
#include "indicadores.h"
#include "teste.h"


int main() {
    float peso, altura, indice;
    int idade;
    char percentil[30];
    printf("Indique a sua idade:");
    scanf("%d", &idade);
    testaidade(idade);
    printf("Indique o seu peso (em Kg): ");
    scanf("%f", &peso);
    testapeso(peso);
    printf("Indique a sua altura (em m): ");
    scanf("%f", &altura);
    testaaltura(altura);
    indice = imc(peso, altura);
    testaindice (indice);
    printf("O valor do seu IMC é: %f\n", indice);
    calculapercentil (indice, percentil);
    printf("%s",percentil);
    return 0;


}

