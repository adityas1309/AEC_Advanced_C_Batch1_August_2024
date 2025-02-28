/*
Problem Statement:
Find out the digital Root of a user given number n.
As example -
1) n = 132 => 1 + 3 + 2 = 6 (Single Digit)
   So, 6 is the Digital Root of 132
2) n = 407 => 4 + 0 + 7 = 11 => 1 + 1 = 2 (Single Digit)
   So, 2 is the Digital Root of 407
3) n = 199 => 1 + 9 + 9 = 19 => 1 + 9 = 10 => 1 + 0 = 1 (Single Digit)
   So, 1 is the Digital Root of 199
Write a program in C to find the Digital Root of one user given number n.
*/
#include <stdio.h>
int main(void) {
	int num,last_digit,total = 0;
	printf("\nPlease enter an integer number: ");
	scanf("%d", &num);
	while (num != 0) {
		last_digit = num % 10;
		total += last_digit;
		num = num / 10;
		if (num == 0 && total > 9) {
			num = total;
			total = 0;
			printf("\nGoing again for num = %d...", num);
		}
	}
	printf("\nSo the Digital Root is %d...", total);
	printf("\nEnd of the program...");
}
   
   
   
   
   
   
   
   
   
   
   
