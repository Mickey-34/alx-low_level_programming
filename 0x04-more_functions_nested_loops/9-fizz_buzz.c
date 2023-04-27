#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1-100
 * Fizz for multiples of 3 ,Buzz for multiples of 5'
 * FizzBuzz for both multiples
 *
 * Return: Must be 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 15 == 0)
	printf("FizzBuzz");
	else if (a % 3 == 0)
	printf("Fizz");
	else if (a % 5 == 0)
	printf("Buzz");
	else
	printf("%d", a);
	if (a < 100)
	printf(" ");
	}
	printf("\n");
	return (0);
}
