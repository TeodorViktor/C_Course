#include <stdio.h>
#include <cs50.h>
#include <cs50.c>



int main(void){

    FILE *frst = fopen("phonebook.csv","a");
    char* name[8];
    printf("Enter your name: ");
    scanf("%s\n", name);
    char* num = "01285985621";
    fprintf(frst, "%s %s\n", name, num);
    fclose(frst);
}