#include <stdio.h>
#include "zombie.h"
#define SIZE = 5

struct zombie {
    enum {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} day;   
    float blood;
    int toes;
    int hour;
    int min;
    int sec;
    char dead;
};

void input_time(struct zombie z, int day, int hour, int min, int sec) {
    z.day = day;
    z.hour = hour;
    z.min = min;
    z.sec = sec;
}

void input_toes(struct zombie z, int toes) {
    z.toes = toes;
}

void input_blood(struct zombie z, float blood) {
    z.blood = blood;
}

void print_zombies(struct zombie z[], int quantity) {
    for(int i = 0; i < quantity; i++) {
        int dead = z[i].dead == 'Y' ? 1 : 0;
        printf("%d. This zombie was found %s\n", i + 1, dead ? "dead." : "ALVIE!");
        if(dead)
            printf("THis zombie had %d toes.\n", z[i].toes);
        else
            printf("It was drained of %f mL of blood once killed.\n", z[i].blood);
        printf("This zombie was sighted ");
        switch(z[i].day) {
            case MONDAY:
                printf("Monday ");
                break;
            case TUESDAY:
                printf("Tuesday ");
                break;
            case WEDNESDAY:
                printf("Wednesday ");
                break;
            case THURSDAY:
                printf("Thursday ");
                break;
            case FRIDAY:
                printf("Friday ");
                break;
            case SATURDAY:
                printf("Saturday ");
                break;
            case SUNDAY:
                printf("Sunday ");
                break;
            default:
                printf("ERROR; Impossible case reached!\n");
                exit(0);
        }
        printf("at %d:%d:%d\n", z[i].hour, z[i].min, z[i].sec);
    }
}