#include <stdio.h>
#include <string.h>

void censor(char *sentence);

int main(void){
    char sentence[100];

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 
    sentence[strcspn(sentence, "\n")] = '\0'; 
    censor(sentence);
    return 0;
}

void censor(char *sentence){
    size_t tam = strlen(sentence); 
    int i, j = 0;
    char new[100];

    for (i = 0; i < tam; i++){
        if (i <= tam - 3 && 
            sentence[i] == 'f' && 
            sentence[i+1] == 'o' && 
            sentence[i+2] == 'o') {
            
            new[j++] = 'x';
            new[j++] = 'x';
            new[j++] = 'x';
            i += 2; 
        } else {
            new[j++] = sentence[i];
        }
    }
    
    new[j] = '\0';
    printf("\n%s", new);
}