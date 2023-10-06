#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef int Teodor;
// how to craete your own data type
// we will have to make struct new_data_type{}
// or we can make it shorter like that
// typedef struct{}ndt;
// name now is ndt
// to change a data type you need ti as following
// typedef int * Teodor;
// now we changed int with Teodor
// without <cs50.h> nothing calls string and we use char * instead
// char *s = "Hi!";
// When we enter * before any variable it brings it's position in memory
// char *s = "Hi!"; printf("%c\n", *s)

typedef struct{
    string names;
    string grades;
    int sum;
}ndt;

int main(void){
    ndt sheet[2];
    sheet[0].names = "Teodor";
    sheet[0].grades = "94%";
    sheet[1].names = "Thomas";
    sheet[1].grades = "89%";
    for(int i = 0; i < 2; i++){
        if(strcmp(sheet[i].names, "Teodor") == 0){
            printf("Found %s %i\n", sheet[i].grades, i+1);
            return 0;
        }
    } return 1;
    Teodor s = 5;
    printf("%i\n", s);


}