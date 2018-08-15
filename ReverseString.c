#include <stdio.h>

int stringLength(char arr[]);

void reverse(char myString[]){
    int length = stringLength(myString);

    for(int i=0; i <= length/2; i++){
        char currentLetter = myString[0+i];

        myString[0+i] = myString [length-i-1];
        myString[length-i-1] = currentLetter;;
    }
    printf("string length is : %d\n", length);
}

int stringLength(char myString[]){
    int i = 0;
    int endFound = 0;
    int length = 0;
    while(!endFound){
        if(myString[i] == '\0'){
            endFound = 1;
        }else{
            length++;
            i++;    
        }
    }
    return length;
}

void main(){
    char string[20] = "hello"; 
    printf("string: %s\n", string);
    reverse(string);
    printf("reversedSTring: %s", string);

}