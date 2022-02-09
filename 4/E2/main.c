#include <stdio.h>

int main() {
#define N 4
    int v1[N];
    int v2[N];
    int soma, i, j;
    float media;
    for (i =0; i <N; i++)
    {
        printf("Introduza Um numero\n");
        scanf("%d", &v1[i]);
    }

    for ( i = 0, soma = 0; i<N; i++ )
        soma += v1[i];
    media = soma /i;
    printf("Media = %.1f\n", media);

    for (i = 0, j = 0; i < N; i++)
    {
        if (v1[i] > media )
            v2[j++] = v1[i];
    }
    v2[j] = '\0';

    for (i = 0; v2[i] != '\0'; i++ )
        printf("%d\n", v2[i]);


  return 0;
}
