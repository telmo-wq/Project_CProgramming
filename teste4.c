#include <stdio.h>

int main (void)
{
    int x, y;

    printf("Hello: ");
    scanf("%d", &x);
    scanf("%d", &y);
    int i = 0;
    int c = 0;

    for (i = 0; i <= y; i++){
        printf("%d ", i);
        c = c + 1;
        if (c == x){
            printf("\n");
            c = 0;
        }
        
    }
}