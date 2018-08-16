#include <ctype.h>
#include <stdio.h>

#define NUMBER '0';
int getChr();
void ungetChr(int);

int getOp(char string[]){
    printf("calling getOp function\n");
    int i, chr;

    while((string[0] = chr = getChr()) == ' ' || chr == '\t')
        ;
    string[1] = '\0';
    if(!isdigit(chr) && chr != '.')
        return chr;

    i = 0;
    if(isdigit(chr))
        printf("input is digit.. \n");
        while(isdigit(string[++i] = chr = getChr()))
            ;
        printf("string array = %s" ,  string);
    string[i] = '\0';
    if(chr != EOF)
        ungetChr(chr);
    return NUMBER;           

}