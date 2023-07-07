#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _islower(int ch_ar);
int _isalpha(int chr);
int _abs(int str_int);
int _isupper(int chr);
int _isdigit(int chr);
int _strlen(char *strin_g);
void _puts(char *str_ing);
char *_strcpy(char *str_dest, char *str_src);
int _atoi(char *str_ing);
char *_strcat(char *de_st, char *sr_c);
char *_strncat(char *des_t, char *s_rc, int n_um);
char *_strncpy(char *str_dest, char *str_src, int strin_put);
int _strcmp(char *str_string1, char *str_string2);
char *_memset(char *start_ing, char str, unsigned int num);
char *_memcpy(char *de_st, char *src, unsigned int num_ber);
char *_strchr(char *strn, char ch_ar);
unsigned int _strspn(char *str, char *str_accept);
char *_strpbrk(char *str_string, char *str_accept);
char *_strstr(char *hay_stack, char *need_le);
#endif
