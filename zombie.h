/**
 * @file zombie.h
 * @author Donovan Griego
 * @brief Header file for zombie.c
 * @date 2020-10-22
 */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_
#include <stdlib.h>
#define SIZE 5
#define BUFFER 20

struct zombie {
    enum {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} day;   
    float blood;
    int toes;
    int hour;
    int min;
    int sec;
    char dead;
};
void input_time(struct zombie *z, int day, int hour, int min, int sec);
void input_toes(struct zombie *z, int toes);
void input_blood(struct zombie *z, float blood);
void print_zombies(struct zombie z[], size_t size);

#endif