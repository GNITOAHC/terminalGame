#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "interact.h"

void red (char a) {
    printf("\033[1;31m");
    printf("%c", a);
}
void green (char a) {
    printf("\033[0;32m");
    printf("%c", a);
}
void yellow (char a) {
    printf("\033[1;33m");
    printf("%c", a);
}
void reset () {
    printf("\033[0m");
}

void interact(int * c, char * ans){
    for (int i=0; i<5; ++i){
        if (c[i] == 0){ // no this char
            red(ans[i]);
        }
        if (c[i] == 1){ // yes this char
            yellow(ans[i]);
        }
        if (c[i] == 2){ // correct char
            green(ans[i]);
        }
    }
    printf("\n");
    reset();

    return;
}

bool correct(int * c){
    for (int i=0; i<5; ++i){
        if (c[i] != 2)
            return false;
    }
    printf("Congratuation!!\n");
    return true;
}