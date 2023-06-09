#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: the total sum of the integer parameters,
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
