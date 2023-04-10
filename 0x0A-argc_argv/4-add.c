#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: prints the total number of the arguments passed
 * @argv: prints the array of each arguments passed into the program
 *
 * Return: returns 1 if one of the number contains symbols that are non-digits,
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
