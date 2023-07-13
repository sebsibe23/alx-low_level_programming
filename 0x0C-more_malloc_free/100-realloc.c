#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates the memory block using malloc and free function.
 * @ptr: a pointer to the memory previsouly allocated by malloc function.
 * @old_size: a size of allocated memory for ptr.
 * @new_size: new size of the new memory block.
 * Return: return pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str_ptr1;

	char *strold_ptr;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	str_ptr1 = malloc(new_size);
	if (!str_ptr1)
		return (NULL);
	strold_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str_ptr1[i] = strold_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str_ptr1[i] = strold_ptr[i];
	}
	free(ptr);
	return (str_ptr1);
}
