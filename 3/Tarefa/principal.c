#include <stdio.h>
#include <stdlib.h>
#include "desenhos.h"
int main(int argc, char *argv[]) {
    if(argc == 3) {
        int tarefa = atoi(argv[1]);
        int numero = atoi(argv[2]);
        switch(tarefa) {
            case 1: imprime_triangulo(numero); break;
            case 2: imprime_losango(numero); break;
            case 3: imprime_hexagono(numero); break;
            default: printf("Erro! Tarefa desconhecida: %d\n", tarefa);
        }
    }
    if(argc !=3) {
        int tf = 4, ta = -1;

        do
            {
                printf("Escolha Uma Opção:\n");
                printf("0 - Sair\n");
                printf("1 - Triângulo\n");
                printf("2 - Losango\n");
                printf("3 - Hexagono\n");
                scanf("%d" , &tf);
            }
        while (tf > 3 || tf < 0 );

            if (tf == 0)
            return 0;

            do
            {
                printf("Qual o Tamanho?\n");
                scanf("%d", &ta);
            }
        while (ta < 0);


        if (tf == 1)
            imprime_triangulo(ta);
        if (tf == 2)
            imprime_losango(ta);
        if (tf == 3)
            imprime_hexagono(ta);
    }
    return 0;
}
