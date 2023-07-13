#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int strb);
char *string_nconcat(char *strs1, char *strs2, unsigned int strn);
void *_calloc(unsigned int strnmemb, unsigned int strsize);
int *array_range(int strmin, int strmax);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *strs);
int is_digit(char *strs);
#endif
