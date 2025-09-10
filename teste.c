#include <stdio.h>


int main()
{
    const double pi = 3.14159;
    double r, area;
    
    scanf("%lf", &r);
    area = pi * r * r;
    
    printf("A=%.4lf\n", area);
    return 0;
}