#include<stdio.h>
#include <cs50.h>



void rec(int n);

int main(void){
    int height = get_int("Enter your number: \n");
    rec(height);

}

void rec(int n){
    //for(int i = 0; i < n; i++){
        //for(int j = 0; j < i+1; j++){
           // printf("#");
       // }printf("\n");
   // }
   if(n <= 0){
    return;
   }rec(n - 1);
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
    
}