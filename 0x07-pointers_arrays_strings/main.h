#ifndef MAIN_H
#define MAIN_H

char *_memset(char *p, char b, unsigned int n);
int _putchar(char ch);
char *_memcpy(char *de_st, char *s_rc, unsigned int n);
char *_strchr(char *p, char c);
unsigned int _strspn(char *p, char *accep_t);
char *_strpbrk(char *p, char *accep_t);
char *_strstr(char *hay_stack, char *need_le);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **p, char *t_o);
#endif
