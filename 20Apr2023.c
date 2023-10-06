#include <stdio.h>

int main(void){
    printf("Hello!\n");
    int m1 = 50;
    printf("%i\n", *&m1);
}