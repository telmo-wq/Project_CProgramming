#include <stdio.h>

int main()
{
    int num;
    printf("Num: ");
    scanf("%d", &num);

    if (num == 1){
        printf("\nPositivo");
    }else if (num == 0){
        printf("\nNegativo");
    }
}