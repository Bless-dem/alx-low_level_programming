#include "main.h"
/**
 *_memcpy - a function that copy from memory area
 *@dest: stores byte in memory area
 *@src: where memory is copied
 *@n: number of bytes
*Return: return a pointer to memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
