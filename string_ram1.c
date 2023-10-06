#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>


int main(void){

    int* arr = malloc(3*sizeof(int));
    if(arr == NULL){
        return 1;
    }
    arr[0] = 3;
    arr[1] = 6;
    arr[2] = 2;
    printf("%i\n", arr[0]);
    *arr = 3;
    *(arr+1) = 6;
    *(arr+2) = 2;
    printf("%i\n", arr[0]);
    printf("%i\n", arr[1]);
    printf("%i\n", arr[2]);
    free(arr);
}
// malloc(3*sizeof(int)); = reserve 3 places in ram type of int (12 byts)
// when we have an array of 3 or ex and wanted to resize it or add one more variable we can
// use malloc and create a new array and copy the old array in the new array and then add the new variable in the new array
// we can use realloc as well
// realloc(oldarray, 4*sizeof(int));