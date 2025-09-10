#include <stdio.h>

int main()
{
    float code, qnt, price;

    scanf("%f", &code);
    scanf("%f", &qnt);

    if (code == 1.0) {

        price = qnt * 4;
    }else if (code == 2.0) {

        price = qnt * 4.50;
    }else if (code == 3.0) {

        price = qnt * 5;
    }else if (code == 4.0) {

        price = qnt * 2.0;
    }else if (code == 5.0){

        price = qnt * 1.50;
    }

    printf("Total: R$ %.2f", price);
}