#include <stdio.h>
#define N 10
int main() {
    char s1[10], s2[10];


    printf("Escreva uma palavra\n");
    scanf("%s", s1);
    printf("Escreva outra palavra\n");
    scanf("%s", s2);


    int contida (char s1 [], char s2 [])
    {
        int i, j, k;
        for (i = 0; s1[i] != '\0'; i++)
            for (j = 0, k = i; s2[j] == s1[k]; j++, k++)
                if (s2[j+1] == '\0')
                    return i;
        return -1;
    }
int r;
r = contida (s1,s2);
printf("%d\n", r);

return 0;


}
