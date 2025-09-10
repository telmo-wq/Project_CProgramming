#include <stdio.h>

int main(void)
{
    int n1, n2, n3, maior, menor, medio;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if (n1 > n2){

        if (n1 > n3){

            maior = n1;

            if (n2 > n3){

                medio = n2;
                menor = n3;
            }else {
                
                medio = n3;
                menor = n2;
            }
        }else {

            maior = n3;
            medio = n1;
            menor = n2;
        }
    } else if (n2 > n3){

        maior = n2;
        if (n3 > n1){
            medio = n3;
            menor = n1;
        }else {

            medio = n1;
            menor = n3;
        }
    }else {

        maior = n3;
        medio = n2;
        menor = n1;
    }

    printf("\n%d\n", menor);
    printf("%d\n", medio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d", n3);

}