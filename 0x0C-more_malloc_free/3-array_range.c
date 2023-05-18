#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: Int starter
 * @max: Maximum int
 * Return: Array of integers
 */
int *array_range(int min, int max)
{
	int mimi, fan;
	int *zebra;

	if (min > max)
	return (NULL);
	mimi = max - min + 1;
	zebra = malloc(sizeof(int) * mimi);
	if (!zebra)
	return (NULL);
	for (fan = 0; fan < mimi; fan++)
	zebra[fan] = min++;
	return (zebra);
}
