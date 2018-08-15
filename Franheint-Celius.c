#include <stdio.h>

main(){
    float fahr, celcius;
    int lower, upper, step;

    #define LOWER  0
    #define UPPER  300
    #define STEP  20

    fahr = LOWER;
    
    int fahrToCelcius(int fahrenheit){
        int celcius;
        celcius = 5* (fahrenheit-32)/9;
        return celcius;
    }

     printf("%s \t %s \n", "fahrenheit", "celcius");
    while (fahr <= UPPER){
        celcius = fahrToCelcius(fahr);
        printf("%8.0f %14.1f \n", fahr, celcius);
        fahr = fahr + STEP;
    }
}