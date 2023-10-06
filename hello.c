#include <stdio.h>
#include <cs50.h>
int main(void){

    printf("Hello, world\n");
  //  string answer = get_string("What is your name?\n");
    //printf("Hello, %s\n",answer);
    int num1 = 5;
    int num2 = 3;
    printf("%i\n", num1 + num2);
    long numb1 = get_long("Give a number from 1 to 9!\n");
    long numb2 = get_long("Give another number from 1 to 9!\n");
    printf("%li \n", numb1 + numb2);


}
// code filename.c to create a new file
// rm filename.c to remove the file
// y = yes n = no
// ls to know number of files
// mv file name new file name
// mkdir folder name (to craerte a new folder)
// rmdir folder name to remove the folder
// cd folder name (cd to change folder)
// ../ step back
// || = or
// const int = 4; to prvent int change

// int i = 1;
//while(i < 3)
//{
   // printf("Something\n");
 //  i++ / i+=1 / i = i + 1;
//}

//
//for(int i = 0 ; i < 3; i++)
//{
   // printf("Something\n");
//}
// without CS50 we need to convert the file ourselves
// clang filename.c
// it will result with a file called a.out
// to convert and create a name in the same time
// clang -o newfilename filename
// for example (clang -o hello hello.c)
// if the new file with include <cs50.h>
// clang -o hello hello.c -lcs50
// ************ 2 ways for debugging ************
// 1st help50 make filename
// 2nd debug50 ./filename

// to get pointer we add & before the Variable
// int p = 50;
// printf("%p\n", &p);
// int *n // int* n = &p; To store the pointer
// printf("%i \n", *n); to get what inside the bite or memory