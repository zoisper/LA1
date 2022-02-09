#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a , b, c ;

    printf("Introduza os valores a b e c do triangulo abc\n");
    scanf ("%d %d %d", &a, &b, &c);

    while ((abs(b - c) >= a) || ((b + c ) <= a ) || (abs ( a - c ) >= b) || ((a + c) <= b) || (abs ( a - b ) >= c) || ((a + b) <= c)  )
        {
        printf ("Triangulo Impossivel\n");
        printf("Introduza os valores a b e c novamente\n");
        scanf ("%d %d %d", &a, &b, &c);
        }
if (a == b & b == c)
printf ("Triângulo Equilatero\n");
else
    if (a == b || a == c || b == c )
         printf ("Triângulo Isosceles\n");
    else
        printf("Triângulo Escaleno\n");

    float s = (1.0 * (a + b + c)) / 2;
    float area = sqrt  ( s * (s - a) * (s - b) * (s - c));

printf( "Area do Triângulo: %.2f\n",area);

return 0;

}
