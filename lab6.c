/**
 * @file lab6.c
 * @author Donovan Griego
 * @brief Makes use of zombie.c and zombie.h to create a zombie sighting log system
 * @date 2020-10-22
 */
#include <stdio.h>
#include "zombie.h"


int main() {
    struct zombie zombies[SIZE];
    struct zombie *z;
    int current = 0;
    char in[BUFFER];
    char cIn;
    int intIn1;
    int intIn2;
    int intIn3;
    int intIn4;
    float fIn;
    size_t size;
    while(1) {
        printf("\n1) Enter new zombie information\n");
        printf("2) Display zombie information\n");
        printf("3) Return to fighting zombies (exit)\n");
        printf(">> ");
        fgets(in, BUFFER, stdin);
        sscanf(in, "%d", &intIn1);
        switch(intIn1) {
            case 1:
                z = &zombies[current % SIZE];
                printf("\nWas this zombie found dead? Y or N\n");
                printf(">> ");
                fgets(in, BUFFER, stdin);
                sscanf(in, "%c", &cIn);
                z->dead = cIn;
                if(cIn == 'Y') {
                    printf("\nPlease enter the number of toes the zombie has.\n");
                    printf(">> ");
                    fgets(in, BUFFER, stdin);
                    sscanf(in, "%d", &intIn1);
                    input_toes(z, intIn1);
                } else {
                    printf("\nPlease enter the amount of blood that oozed from its body.\n");
                    printf(">> ");
                    fgets(in, BUFFER, stdin);
                    sscanf(in, "%f", &fIn);
                    input_blood(z, fIn);
                }
                printf("\nPlease choose the day this zombie was encountered.\n");
                printf("1) Monday\n");
                printf("2) Tuesday\n");
                printf("3) Wednesday\n");
                printf("4) Thursday\n");
                printf("5) Friday\n");
                printf("6) Saturday\n");
                printf("7) Sunday\n");
                printf(">> ");
                fgets(in, BUFFER, stdin);
                sscanf(in, "%d", &intIn1);
                printf("\nEnter the time this zombie was encountered.\n");
                printf("Separate hours, minutes, and seconds by colons.\n");
                printf("HH:MM:SS\n");
                printf(">> ");
                fgets(in, BUFFER, stdin);
                sscanf(in, "%d:%d:%d", &intIn2, &intIn3, &intIn4);
                input_time(z, intIn1, intIn2, intIn3, intIn4);
                current++;
                break;
            case 2:
                if(current >= SIZE)
                    size = SIZE;
                else
                    size = current;
                print_zombies(zombies, size);
                break;
            case 3:
                printf("\nStay alert! Keep a watch out for zombies!!\n");
                printf("\nGOODBYE and GOOD LUCK!\n");
                exit(1);
        }
    }
}