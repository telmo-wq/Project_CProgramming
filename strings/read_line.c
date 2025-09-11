#include <stdio.h>

int read_line(char str[], int n);


int main(void){
    char sentence[80];

    printf("Enter sentence:\n");
    printf("%d", read_line(sentence, 80));
}

int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n'){
        if (i < n){
            str[i] = ch;
            i++;
        }
    }
    str[i] = '\0';
    return i;
}