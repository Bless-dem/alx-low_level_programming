#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: printe the total number of arguments passed
 * @argv: prints the arrar of each number of argument passed into the program
 * Return: return 1, if program is not exactly 1, otherwise print 0
 */
int main(int argc, char *argv[])
{	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
				coins++;
			}
		}
	}
	printf("Error\n");
		return (1);
	printf("%d\n", coins);
		return (0);
}
