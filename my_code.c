#include <stdio.h>
#include <stdlib.h>

int main(void) {
    volatile char *my = (char *)malloc(8);
    int i = 0;
    for(; i < 8; i++) {
        my[i] = i%2?'o':'l';
    }
    printf("%s", my);
    free((void *)my);
    return 0;
}
