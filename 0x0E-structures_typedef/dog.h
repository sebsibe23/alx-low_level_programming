#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info.
 * @name: First member struct dog.
 * @age: Second member struct dog.
 * @owner: Third member struct dog.
 *
 * Description: Longer description struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * strdog_t - typedef for struct dog
 */
typedef struct dog strdog_t;

void init_dog(struct dog *strd, char *name, float age, char *owner);
void print_dog(struct dog *strd);
strdog_t *new_dog(char *name, float age, char *owner);
void free_dog(strdog_t *strd);
char *_strcpy(char *strdest, char *strsrc);
int _strlen(char *str);

#endif
