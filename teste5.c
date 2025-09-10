#include <stdio.h>

int main()
{
    float n, media = 0, soma = 0, posi = 0;
    int i;

    for (i = 1; i <= 6; i++){
        scanf("%f", &n);
        if (n > 0) {
            posi ++;
            soma = soma + n;
        } 
    }

    media = soma / posi;

    printf("%d valores positivos\n", posi);
    printf("%f\n", media);
}
