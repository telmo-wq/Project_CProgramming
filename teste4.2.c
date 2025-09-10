#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    int i;
    int c = 0;

    for (i = 1; i <= y; i++){
        c = c + 1;
        if (c == x){
            printf("%d\n", i);
            c = 0;
        }else {
            printf("%d ", i);
        }
    }
}