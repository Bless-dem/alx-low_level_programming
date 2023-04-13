#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a program tht allocates memory using malloc
 * @b: size allocated to malloc
 *
 * Return: return pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
