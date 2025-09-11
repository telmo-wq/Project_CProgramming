#include <stdio.h>

int count_spaces(char *s){
    int count = 0;

    for (; *s != '\0'; *s++){
        if (*s == ' '){
            count ++;
        }
    }
    return count;
}


int main(void){
    char str[80];

    printf("Enter sentence:\n");
    gets(str);
    printf("%d", count_spaces(str));
}