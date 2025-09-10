#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
    int n, i, largest, second_largest;

    printf("Length of array: ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    find_two_largest(a, n, &largest, &second_largest);
    
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int i;

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (i = 2; i < n; i++){
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] != *largest) {
            *second_largest = a[i];
        }
    }

    printf("Largest number: %d\n", *largest);
    printf("Second largest number: %d\n", *second_largest);
}