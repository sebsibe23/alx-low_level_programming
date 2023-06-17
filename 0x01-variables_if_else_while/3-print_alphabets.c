#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main() {
  for (char c = 'a'; c <= 'z'; c++) {
    putchar(c);
  }
  for (char c = 'A'; c <= 'Z'; c++) {
    putchar(c);
  }
  return 0;
}
