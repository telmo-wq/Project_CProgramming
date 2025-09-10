#include <stdio.h>

int *find_largest(int a[], int n);


int main(void){
    int length, i;

    printf("Length of array:");
    scanf("%d", &length);
    int list[length];

    for (i = 0; i < length; i++){
        printf("Enter in the array: \n");
        scanf("%d", &list[i]);
    }

    printf("Largest value: %d", find_largest(list, length));

    return 0;
}


int *find_largest(int a[], int n){
    int largest = a[0], i;

    for (i = 0; i < n; i++){
        if (a[i] > largest){
            largest = a[i];
        }
    }

    return largest;
}