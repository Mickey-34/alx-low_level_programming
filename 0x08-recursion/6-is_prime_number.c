#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if n is a prime number
 * @n: int
 * @sunny: int
 * Return: 1 if input is prime number
 * otherwise 0
 */
int prime(int n, int sunny);
int is_prime_number(int n)
{
return (prime(n, 2));
}

/**
 * prime - check if all numbers < n are divisible by it
 * @n: int
 * @sunny: int
 * Return: int
 */
int prime(int n, int sunny)
{
	if (sunny >= n && n > 1)
	return (1);
	else if (n % sunny == 0 || n <= 1)
	return (0);
	else
	return (prime(n, sunny + 1));
}
