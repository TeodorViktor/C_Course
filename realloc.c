#include<stdio.h>
#include<stdlib.h>

int main(void){


    int* arr = malloc(3*sizeof(int));
    if(arr == NULL){
        free(arr);
        return 1;
    }
    arr[0] = 3;
    arr[1] = 6;
    arr[2] = 4;

    int* temp = malloc(4*sizeof(int));
    if(temp == NULL){free(temp); return 1;}
    for(int i = 0; i < 3; i++){
        temp[i] = arr[i];
    }
    free(arr);
    arr = temp;
    temp[3] = 12;
    for(int i = 0; i < 4; i++){
        printf("%i\n", arr[i]);
    }
    free(temp);

}// int* temp = realloc(arr, 4*sizeof(int)); will replace from line 16 to line 21