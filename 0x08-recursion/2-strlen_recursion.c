#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: measures the length
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
