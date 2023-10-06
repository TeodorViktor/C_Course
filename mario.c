#include <stdio.h>
#include <cs50.h>

int main(void){

    //int number = -1;
    //while(number < 1){
      //  number = get_int("Enter a number bigger than 1:");
  //  }
   // for(int i = 0; i < number & i > -1; i++){
    //    printf("#");
    //}
   // printf("\n");
   // -------------------------------------------------------------------------
 //  int number;
  // do{
     //   number = get_int("Enter a number:");
  // }while(number < 1);
  //  for(int i = 0; i < number; i++){
  //  printf("#");}
  //  printf("\n");

// ------------------------------------------------------------------------------
    int number;
    do{
        number = get_int("Enter amount:");
    }while(number < 1);

    for(int i = 0; i < number; i++){
        for(int j = 0; j < number; j++){
            printf("#");
        }
        printf("\n");
    }

}