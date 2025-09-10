#include <stdio.h>



void split_time(long int total_sec, int *hr, int *min, int *sec);


int main(void){
    long int seconds;

    int *hr, *min, *sec;

    printf("Insert seconds: ");
    scanf("%d", &seconds);

    split_time(seconds, &hr, &min, &sec);

    return 0;
}


void split_time(long int total_sec, int *hr, int *min, int *sec){
    *hr = (total_sec/3600);
    *min = ((total_sec - *hr*3600)/60);
    *sec = (total_sec - *hr*3600 - *min*60);

    printf("Hours: %d\n", *hr);
    printf("Minutes: %d\n", *min);
    printf("Seconds: %d\n", *sec);
}