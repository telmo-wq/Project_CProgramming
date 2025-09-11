#include <stdio.h>

int main(void){
    char sentence[80 + 1];

    printf("Enter a sentence:\n");
    gets(sentence);
    printf("%s", sentence);
}