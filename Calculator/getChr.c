#include <stdio.h>

#define BUFFSIZE 100

char buffer[BUFFSIZE];
int bufferPos = 0;

int getChr(){
    printf("calling getChr function\n");
    return (bufferPos > 0)  ? buffer[--bufferPos] : getchar();
}

void ungetChr(int c){
    printf("calling ungetChr function\n");
    if (bufferPos >= BUFFSIZE){
        printf("ungetChr: too many characters\n");
    }else{
        buffer[bufferPos++] = c;
    }
}