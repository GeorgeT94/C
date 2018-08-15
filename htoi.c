#include <stdio.h>
#include <math.h>
#include <ctype.h>

int hexToInt(char arr[]);
int stringLength(char arr[]);

int hexToInt(char hexString[]){
    int hexAsInt = 0;
    int length = stringLength(hexString);

    printf("length : %d\n", length);

    for(int i=0; i <length ; i++){
        char currentChar = hexString[i];
        int power = length - i -1; 

        if(isdigit(currentChar)){
            hexAsInt += (currentChar - '0') * pow(16, power);
        }
        if(currentChar >= 'A' && currentChar <= 'F'){
            hexAsInt += (currentChar - 'A' + 10) * pow(16, power);
        }

        if(currentChar >= 'a' && currentChar <= 'f'){
            hexAsInt += (currentChar - 'a' + 10) * pow(16, power);
        }
    }
    return hexAsInt;
}

void main(){
    char hexNumber[20] = "1fab134";
    int intNumber = hexToInt(hexNumber);

    printf("%d", intNumber);
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