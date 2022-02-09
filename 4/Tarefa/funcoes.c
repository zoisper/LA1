//
// Created by tiago on 23/02/20.
//

#include "funcoes.h"

void tarefa1 (int v[], int dim, int indice)
{
    int i, valor;
    valor = v[indice];
    for (i=0; i<dim; i++)
        v[i] += valor;
}
void tarefa2 (int v[], int dim, int shifter)
{
    int i, j, s, c;
    s = shifter % dim ;
    for (i=0; i < s ; i++)
    {
     for (j = 0; j < dim - 1; j++)
        {
            c = v[j];
            v[j] = v[j+1];
            v[j+1] = c;
        }
     v[j] = c;
    }
 }
void tarefa3 (int v[], int dim, int valor )
{
    int i, j, h, c;
    for (i=0; i < dim; i++)
    {
        if (v[i] >= valor)
        {
            for (j = 0; v[j] >= valor; j++);
            for (h = i; h > j ; h--)
            {
                c = v[h-1];
                v[h-1] = v[h];
                v[h] = c;
            }
        }
    }
}