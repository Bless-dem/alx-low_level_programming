#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars initialized w/ specific char
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: Return NULL if its size -0,otherwise pointer to array if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
