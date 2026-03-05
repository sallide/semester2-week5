/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Saloni Pradhan
 * ID: 201829493
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	int temp;
	char hex[9];
	int remainder;
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	size_t len = 0;
	len = strlen(hex);

	for (int i = 0; i < len; i++) {
		
		hex[i] = toupper(hex[i]);

		if (hex[i] == '0') {
            temp=0;
        }
		else if (hex[i] == '1') {
            temp=1;
        }
		else if (hex[i] == '2') {
            temp=2;
        }
		else if (hex[i] == '3') {
            temp=3;
        }
		else if (hex[i] == '4') {
            temp=4;
        }
		else if (hex[i] == '5') {
            temp=5;
        }
		else if (hex[i] == '6') {
            temp=6;
        }
		else if (hex[i] == '7') {
            temp=7;
        }
		else if (hex[i] == '8') {
            temp=8;
        }
		else if (hex[i] == '0') {
            temp=9;
        }
		else if (hex[i] == 'A') {
            temp=10;
        }
		else if (hex[i] == 'B') {
            temp=11;
        }
		else if (hex[i] == 'C') {
            temp=12;
        }
		else if (hex[i] == 'D') {
            temp=13;
        }
		else if (hex[i] == 'E') {
            temp=14;
        }
		else if (hex[i] == 'F') {
            temp=15;
        }
		else {
            printf("Error: Invalid Hexadecimal\n");
			return 1;
        }

		decimal = decimal * 16 + temp;


  		}

		

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}

