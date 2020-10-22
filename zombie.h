#ifndef ZOMBIE_H_
#define ZOMBIE_H_

void input_time(struct zombie z, int day, int hourr, int min, int sec);
void input_toes(struct zombie z, int toes);
void input_blood(struct zombie z, float blood);
void print_zombies(struct zombie z[]);

#endif