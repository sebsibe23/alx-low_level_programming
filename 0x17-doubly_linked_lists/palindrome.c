#include <stdio.h>

/**
 * is_palindrome - Checks if the number is a palindrome
 *
 * @n: the number to check
 *
 * returns: 1 if the number is a palindrome, 0 otherwise
 */
int is_palindrome(int n) 
{
	int rev = 0, vartemp = n;
	while (vartemp != 0) 
	{
		int digit = vartemp % 10;
		rev = rev * 10 + digit;
		vartemp /= 10;
	}
	return n == rev;
}

/**
 * main - Finds a largest palindrome made from a product of two 3-digit numbers and writes it to a file
 *
 *   returns: return 0 if the program runs successfully
 */
int main() 
{
	int max_palindrome = 0;
	int return_ = 0;
	for (int i = 999; i > 99; i--) {
		for (int j = i; j > 99; j--) {
			int product = i * j;
			if (product <= max_palindrome) {
				break;
			}
			if (is_palindrome(product)) {
				max_palindrome = product;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file != NULL) {
		fprintf(file, "%d", max_palindrome);
		fclose(file);
	}

	return (return_);
}
