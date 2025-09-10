#include <stdio.h>

void max_min(int a[], int *max, int *min);

int main(void){
    int b[10], big, small, i;

    printf("Enter 10 numbers: ");

    for(i = 0; i < 10; i++){
        scanf("%d", &b[i]);
    }

    max_min(b, &big, &small);

    printf("Largest number: %d", big);
    printf("\nSmallest number: %d", small);
    
}

void max_min(int a[], int *max,  int *min){
    int i;

    *max = *min = a[0];
    for(i = 0; i < 10; i++){
        if (a[i] > *max){
            *max = a[i];
        }else if (a [i] < *min){
            *min = a[i];
        }
    }
}