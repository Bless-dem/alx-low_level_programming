#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled on
 *
 * return: 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int %i byte(s)\n", sizeof(long int));
	printf("size of a long long int %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
