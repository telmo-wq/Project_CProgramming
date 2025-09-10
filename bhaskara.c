#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, delta, x1, x2;

    printf("Defina A: ");
    scanf("%f", &a);

    printf("\nDefina B: ");
    scanf("%f", &b);

    printf("\nDefina C: ");
    scanf("%f", &c);

    delta = b * b - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\nX1 = %f", x1);
    printf("\nX2 = %f", x2);

}
