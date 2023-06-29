#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *de_st, char *sr_c, int m);
char *_strncpy(char *de_st, char *sr_c, int m);
int _strcmp(char *s1, char *s2);
void reverse_array(int *x, int m);
char *string_toupper(char *x);
char *cap_string(char *x);
char *leet(char *x);
char *rot13(char *x);
void print_number(int m);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
