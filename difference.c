/**
 * @file difference.c
 * @author Donovan Griego
 * @brief Get the difference between the sum of the squares and the square of the sum from 1 to a max value
 * @date 2020-10-22
 */
#include <stdio.h>
#include <math.h>
#define MAX 100

int main() {
    int sumsq = 0;
    int sqsum = 0;
    for(int i = 1; i <= MAX; i++) {
        sumsq += pow(i, 2);
    }
    for(int i = 1; i <= MAX; i++) {
        sqsum += i;
    }
    sqsum = pow(sqsum, 2);
    printf("The difference between the sum of the squares and the square of the sum from 1 to %d is %d\n", MAX, sqsum - sumsq);
}