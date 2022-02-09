//
// Created by tiago on 16/02/20.
//

#include "desenhos.h"
#include <stdio.h>

void imprime_triangulo(int num_linhas)
{
    int n, space, up;
    char letra;
    for (n = 0; n < num_linhas; n++) {
        for (space = (num_linhas - n -1)*2; space > 0; space--)
            printf(" ");
        for (letra = 'A', up = 0; up <= n; up++)
            printf("%c ", letra++);
        for (letra--; (up - 1) > 0; up--)
            printf("%c ", --letra);
        printf("\n");
    }
}


void imprime_losango(int num_linhas)
{
    int n, space, up, down;
    char letra;
    for (n = 0; n < num_linhas; n++)
    {
        for (space = (num_linhas - n - 1)*2; space > 0; space--)
            printf(" ");
        for (letra = 'A', up = 0; up <= n; up++)
            printf("%c ", letra++);
        for (letra--; (up - 1) > 0; up--)
            printf("%c ", --letra);
        printf("\n");
    }
    for (n = num_linhas - 1; n >0; n--)
    {
        for (space = (num_linhas - n)*2 ; space > 0; space--)
            printf (" ");
        for (letra = 'A', down = n; down > 0; down--  )
            printf("%c ", letra++);
        for (letra--, down++; down < n; down++)
            printf("%c ", --letra);
        printf("\n");

    }
}

void imprime_hexagono(int num_linhas)
{
    int n, space, up, down;

    for (space = num_linhas - 1; space > 0; space--)
        printf(" ");
    for (n = 0; n < num_linhas; n++ )
        printf("#");
    printf("\n");

    for (n=0; n < num_linhas - 1 ;n++)
    {
        for (space = num_linhas - n - 2; space > 0; space--)
            printf(" ");
        printf("#");
        for (space = num_linhas + n*2  ; space > 0 ; space--)
            printf(" ");
        printf("#");
        printf("\n");
    }

    for (n=0; n < num_linhas - 2 ;n++)
    {
        for (space = n+1 ; space > 0 ; space--)
            printf(" ");
        printf("#");
        for (space = (num_linhas-2)*3  - n*2; space > 0; space--)
            printf(" ");
        printf("#");
        printf("\n");

    }



    for (space = num_linhas - 1; space > 0; space--)
        printf(" ");
    for (n = 0; n < num_linhas; n++ )
        printf("#");
    printf("\n");

}