#include "main.h"

/**
* int binary_to_uint - a function that converts
* a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* return: the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == 0)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
