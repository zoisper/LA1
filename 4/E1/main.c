#include <stdio.h>

int main() {
    int i;
    int v[5];
    for (i =0; i < 5; i++)
    {
        printf("Introduza Um numero\n");
        scanf("%d", &v[i]);
    }

    for (i = 4 ; i >  -1; i--)
        printf ("%d\n", v[i]);

        return 0;
}
