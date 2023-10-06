#include <stdio.h>
#include <cs50.h>


int main(void){

    string name = get_string("Enter: \n");
    int i = 0;
    while(name[i] != '\0'){i++;}

    for(int j = 0; j < i; j++){
        if(name[j] >= 'a' && name[j] <= 'z'){
            printf("%c", name[j] - 32);
        }else{
            printf("%c", name[j]);
        }
    }printf("\n");
}
