#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>

int main(void){
    // int number2 = get_int("Enter a number: ");
    printf("Hello!\n");
    int m4 = 50;
    printf("%p\n", &m4); // should print Pointer
    int *m2 = &m4;
    printf("%i\n", *m2); // should print value (*m2 = *&m4)
    string s = "HI!"; // should print pointer
    printf("%p\n", &s[0]);

    char *B = "Hello!";
    printf("%p\n", B); // prints pointer of H
    printf("%c\n", *B); // prints H
    printf("%c\n", B[0]); // prints H

    

}