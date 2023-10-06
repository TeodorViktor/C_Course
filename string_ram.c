#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int upper(char* name);

int main(void){

    char* str1 = get_string("String:");
    upper(str1);
}

int upper(char* name){
    int i = 0;
    while(name[i] != '\0'){i++;}
    printf("%i\n", i);

    char* t = malloc(i + 1);
    if(t == NULL){return 1;}
    for(int n = 0; n <= i + 1; n++){
        t[n] = name[n];
        if(t[0] >= 97 && t[0] <= 122){t[0] -= 32;}
    for(int j = 1; j <= i; j++){
        if(t[j] >= 65 && t[j] <= 90){t[j] +=32;}
        }
    }printf("%s\n", name);printf("%s\n", t);
    free(t);
        return 0;
}
