#include "main.h"

/**
 * initial_prime - checks the recursive of the prime number
 * @a: checks the number
 * @b: iterator
 * Return: return 1, if a is prime number, and 0 if otherwise
 */

int initial_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (initial_prime(a, b - 1));
}

/**
 * is_prime_number - a function that checks a prime number
 * that is an int or not
 * @n: checks the value of the number
 *
 * Return: return 1 if number is prime number and 0, if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (initial_prime(n, n - 1));
}
