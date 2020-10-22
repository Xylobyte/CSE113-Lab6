/**
 * @file sundays.c
 * @author Donovan Griego
 * @brief Finds the number of sundays that fell on the first of the month between a min and max year
 * @date 2020-10-22
 */
#include <stdio.h>
#define START 1901
#define STOP 2000

int getDays(int year, int month);

int main() {
    int year;
    int weekday = 0;
    int num = 0;
    int month;
    for (year = START; year <= STOP; year++) {
        for (month = 1; month <= 12; month++) {
            if (weekday == 5) {
                num++;
            }
            weekday = (weekday + getDays(year, month))%7;
        }
    }
    printf("Number of sundays that fell on the first of the month between %d and %d: %d\n", START, STOP, num);

    return 0;
}

int getDays(int year, int month) {
    int monthDays[12] = {31, 28,31,30,31,30,31,31,30,31,30,31};
    int days;
    if(month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            /* leap year */
            days = 29;
        } else {
            days = 28;
        }
    } else {
        days = monthDays[month-1];
    }
    return days;
}