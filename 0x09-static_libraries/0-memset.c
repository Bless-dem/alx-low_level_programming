#include "main.h"

/**
*_memset - a function that fills a memory with a constant byte
*@s: address of memory to be filled
*@n: number of byte to be modified
*@b: the constant byte to work with
*Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
