#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: Number of command line arguments
 * @argv: Array that contains program line arguments
 * Return: Must be 0
 */
int main(int argc, char *argv[])
{
	int fola, nico = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}

	fola = atoi(argv[1]);

	while (fola > 0)
	{
	if (fola > 25)
	fola -= 25;
	else if (fola >= 10)
	fola -= 10;
	else if (fola >= 5)
	fola -= 5;
	else if (fola >= 2)
	fola -= 2;
	else if (fola >= 1)
	fola -= 1;
	nico += 1;
	}
	printf("%d\n", nico);
	return (0);
}
