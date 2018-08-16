#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100


int getOp(char []);
void push(double);
double pop(void);


int main(){
    int type;
    double operand;
    char s[MAXOP];
    printf("atof(\"123\") = %f\n", atof("123") );
    printf("executing main function\n");
    while((type = getOp(s)) != EOF){
        printf("in main while loop\n");
        switch(type){
            case NUMBER:
                printf("in main: string is %s\n", s);
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() + pop());
                break;
            case '-':
                operand = pop();
                push(pop() - operand);
                break;
            case '/':
                operand = pop();
                if(operand != 0.0)
                    push(pop() / operand);
                else
                    printf("error: can't divide by zero\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command\n");
                break;
        }
    }
    return 0;
}
