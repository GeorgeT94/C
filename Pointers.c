#include <stdio.h>
#include <ctype.h>


void printArray(int arr[], int size);
void printArray2(int *start, int size);

int main(){
    int *myPointer;
    int myArray[100];
    int size = (int)(sizeof(myArray))/sizeof(*myArray);

    myPointer = &myArray[0];
    printArray(myArray, size);
    printf("\n");
    printArray2(myPointer, size);
}

void printArray(int intArray[], int size){
    printf("size of array is : %d \n", size);
    for(int i=0; i< size; i++){
        printf(" %hx " , &intArray[i]);
    }

}

void printArray2(int *arrayStart, int size){
    printf("size of array is : %d \n", size);

    for(int i=0; i< size; i++){
        printf(" %hx " , (arrayStart+i));
    }
}
