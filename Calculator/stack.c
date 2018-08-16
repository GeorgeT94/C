#include <stdio.h>
#define MAXVAL 100

int stackIndex = 0;
double val[MAXVAL];


void push(double f){
    printf("push %f on to stack \n" , f);
    if(stackIndex < MAXVAL ){
        val[stackIndex++] = f;
        printf("stack index is %d", stackIndex);
    }else
        printf("error: stack full");
}

double pop(){
    printf("popping from stack \n");
    if(stackIndex > 0)
        return val[--stackIndex];
    else{
        printf("error empty stack\n");
        return 0.0;
    }
}