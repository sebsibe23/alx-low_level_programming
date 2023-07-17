#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - func returns the length of a string.
 * @s: string to check.
 *
 * Return: return the length of the string.
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - method copies the string pointed to by src.
 * including the terminating null byte (\0).
 * to the buffer pointed to by dest.
 * @src: string to be copied.
 * @dest: pointer to the buffer in which we copy the string.
 *
 *
 * Return: return the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog char.
 * @age: age of the dog int.
 * @owner: owner of the dog char.
 *
 * Return: return pointer to the new dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int strlen1, strlen2;

	strlen1 = _strlen(name);
	strlen2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strlen1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
