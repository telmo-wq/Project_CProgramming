#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void){
    int input_day, input_year;
    int *month, *day;

    printf("Insert the day: ");
    scanf("%d", &input_day);
    printf("Insert the year: ");
    scanf("%d", &input_year);

    split_date(input_day, input_year, &month, &day);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day){
    *month = (day_of_year / 30);
    *day = day_of_year - *month * 30;

    printf("Year: %d\n", year);
    printf("Month: %d\n", *month + 1);
    printf("Day: %d\n", *day);
}