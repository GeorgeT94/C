#include <stdio.h>

main(){

    int c;
    int blankCounter;
    int tabCounter;
    int newLineCounter;

    while(c=getchar() != EOF){
        if(c == ' ') blankCounter++;
        if(c == '\t') tabCounter++;
        if(c = '\n') newLineCounter++;
    }

    printf("blanks : %d\ntabs : %d, newLines : %d", blankCounter, tabCounter, newLineCounter);
}