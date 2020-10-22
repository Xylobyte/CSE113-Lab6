#include <stdio.h>
#define MAX 20

int main() {
    for(int i = 1; 1; i++) {
        for(int j = 1; j <= MAX; j++) {
            if(i % j == 0) {
                if(j == MAX) {
                    printf("The smallest number that can be divided by each number from 1 to %d is %d\n", MAX, i);
                    return 1;
                } else 
                    continue;
            } else 
                break;
        }
    }
}