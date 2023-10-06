#include <stdio.h>
#include <cs50.h>



int main(void){
    int n = 50;
    int* s = &n;
    printf("%i\n", n);
    printf("%p\n", &n);
    printf("%p\n", s);
    printf("%i\n", *s);

    char* m = "Hi!";
    printf("%s\n", m);
    printf("%c\n", *m);
    printf("%p\n", m);




}
//int length = get_int("Enter nummber of cells: \n");
  //  int arr[length];
   // int cell = 0;
  //  for(int i = 0; i < length; i++){
     //   arr[i] = get_int("Enter number\n");
//cell += arr[i];
  //  }
   // printf("Total: %i\n", cell / length);