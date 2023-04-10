#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: the total number of arguments passed
 * @argv: prints each number of arguments passed into the program
 *
 * Return: 0 if program is successful,
 * and return 1 if program does not accept 2 arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}

