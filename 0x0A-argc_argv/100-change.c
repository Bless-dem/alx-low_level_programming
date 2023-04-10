#include "main.h"

/**
 * main - print the minimum number of coins
 * to make change for the money
 * @argc: prints the total number of rgument passed
 * @argv: print the array of each argument passed into the program
 *
 * Return: if the number of argument passed is not exactly one, nprint 1,
 * otherwise prints 0, if negative
 */

int main(int argc, char *argv[])
{
	int cents, coins = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
