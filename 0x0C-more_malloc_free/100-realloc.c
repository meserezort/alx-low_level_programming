#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates space of `new_size` bytes and moves old data to new
 *               space.
 * @ptr: Pointer to the old memory space
 * @old_size: The size in bytes of the old memory space
 * @new_size: The size in bytes of the new memory space
 *
 * Return: Pointer to the new memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}

/**
 * _memcpy - copies the memory are from
 * src to dest
 * @dest: The destination pointer
 * @src: The source pointer
 *  @n: bytes to use from src
 *
 *  Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
