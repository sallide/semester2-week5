// Week 5, Session 1

/*
 * Task 1.3
 * Write a C program that perform the same function as the following Python program.
   
   Python program:
   number = int(input("Enter a number: "))
   if (number%3==0) and (number%5==0):
       print("The number is divisible by 3 and 5")
   else:
       print("The number is not divisible by both 3 and 5")
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int number;
    bool val1, val2;

	
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number%3 == 0){

        val1 = true;
    } else {
        val1 = false;
    }
    
    if (number%5 == 0){

        val2 = true;
    } else {
        val2 = false;
    }


    if (val1 && val2){
        printf("The number is divisible by 3 and 5\n");

    } else {
        printf("The number is not divisible by both 3 and 5\n");
    }


	return 0;
}