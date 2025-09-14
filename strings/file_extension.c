#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void){
    char file_name[50];
    char extension[20];

    gets(file_name);

    get_extension(&file_name, &extension); 
}

void get_extension(const char *file_name, char *extension){
    size_t tam = strlen(file_name);
}