#include "cabeçalhos.h"

void main ()

{
    int escolha, dificuldade=0, nivel=0;
    while (1)
    {

        printf("Escolha Uma Opção Entre 1 e 4\n");
        printf("0 - Sair\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        scanf("%d", &escolha);
        if (escolha == 0) return;
        if (escolha == 1)
        {
            do
            {
                soma(dificuldade);
                nivel++;
                if (nivel == 10)
                {
                    nivel = 0;
                    dificuldade +=10;
                }
            }
            while (1);
        }

        if (escolha == 2)
        {
            do
            {
                subtrac(dificuldade);
                nivel++;
                if (nivel == 10)
                {
                    nivel = 0;
                    dificuldade +=10;
                }
            }
            while (1);
        }

        if (escolha == 3)
        {
            do
                {
                    multiplica(dificuldade);
                    nivel++;
                    if (nivel == 10)
                    {
                        nivel = 0;
                        dificuldade +=10;
                    }
                }

            while (1);
        }
        if (escolha == 4)
        {
            do
            {
                divide(dificuldade);
                nivel++;
                if (nivel == 10)
                {
                    nivel = 0;
                    dificuldade +=10;
                }
            }

            while (1);
        }
    }
}