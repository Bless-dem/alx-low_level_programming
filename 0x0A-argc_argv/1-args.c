#include "main.h"

/**
 * main - a program that the number of arguments passed into it
 * @argc: prints the total number of arguments passed
 * @argv: prints each number of arguments passed into the program
 *
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
