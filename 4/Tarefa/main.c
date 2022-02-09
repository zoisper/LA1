#include <stdio.h>
#include "funcoes.h"


int main()
{
    int i, tarefa, tamanho, opcao;
    tarefa = 0;
    while (tarefa <1 || tarefa > 3)
    {
        printf("Escolha a Tarefa de 1 a 3\n");
        scanf("%d", &tarefa);
    }
    printf("Qual o tamanho do array\n");
    scanf("%d", &tamanho);
    int v[tamanho];
    for (i = 0; i<tamanho; i++)
    {
        printf("Escolha o elemento nº %d do array\n", i+1);
        scanf("%d", &v[i]);
    }
    printf("Qual a opção\n");
    scanf("%d", &opcao);

    switch (tarefa)
    {
        case 1 : tarefa1 (v, tamanho, opcao); break;
        case 2 : tarefa2 (v, tamanho, opcao); break;
        case 3 : tarefa3 (v, tamanho, opcao); break;
    }
    for (i = 0; i < tamanho; i++)
        printf("%d\n",v[i]);

    return 0;

}
