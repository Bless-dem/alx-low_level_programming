#include "main.h"

/**
 * actual_sqrt_recursion - print the natural squareroot of the number
 * @n: to get the squareroot of the number
 * @i: iterator
 *
 * Return: the sqrt result
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
* _sqrt_recursion - print the natural  squareroot of the number
* @n: to get the squareroot of the number
* Return: return the square root of the result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
