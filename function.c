#include <stdio.h>
#include <cs50.h>


float result(float amount, float percentage);

int main(void){
    float amount = get_float("Enter full amount: \n");
    int  percentage = get_int("Enter discount: \n");
    float result1 = result(amount, percentage);
    printf("%.1f \n", result1);
}


float result(float amount, float percentage){


    return amount * (100 - percentage)/100;

}