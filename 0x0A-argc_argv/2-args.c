#include "main.h"

/**
 * main - a program that prints all it receives
 * @argc: prints the total number of argiuments passed
 * @argv: prints each array of arguments passed into the progam
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
