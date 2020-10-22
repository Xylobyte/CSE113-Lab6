/**
 * @file zombie.c
 * @author Donovan Griego
 * @brief Functions for lab6.c
 * @date 2020-10-22
 */
#include <stdio.h>
#include "zombie.h"

/**
 * @brief inputs the time and day into zombie sighting struct
 * 
 * @param z zombie sighting struct
 * @param day day input
 * @param hour hour input
 * @param min minute input
 * @param sec second input
 */
void input_time(struct zombie *z, int day, int hour, int min, int sec) {
    z->day = day;
    z->hour = hour;
    z->min = min;
    z->sec = sec;
}

/**
 * @brief inputs the number of toes into zombie sighting struct
 * 
 * @param z zombie sighting struct
 * @param toes 
 */
void input_toes(struct zombie *z, int toes) {
    z->toes = toes;
}

/**
 * @brief inputs the amount of blood into zombie sighting struct
 * 
 * @param z 
 * @param blood 
 */
void input_blood(struct zombie *z, float blood) {
    z->blood = blood;
}

/**
 * @brief prints out the stored zombie sightings to the terminal
 * 
 * @param z array of zobie sighting structs
 * @param size number of zombie sightings to print
 */
void print_zombies(struct zombie z[], size_t size) {
    for(int i = 0; i < size; i++) {
        int dead = z[i].dead == 'Y' ? 1 : 0;
        printf("\n%d. This zombie was found %s\n", i + 1, dead ? "dead." : "ALVIE!");
        if(dead)
            printf("This zombie had %d toes.\n", z[i].toes);
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
        }
        printf("at %d:%d:%d\n", z[i].hour, z[i].min, z[i].sec);
    }
}