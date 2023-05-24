#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Pointer to function for value comparison.
 * Return: If size <= 0, return -1
 * If no element matches, return -1
 * Otherwise the index of first element
 * for which cmp function does not return 0.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int mimi;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (mimi = 0; mimi < size; mimi++)
	{
	if (cmp(array[mimi]) != 0)
	return (mimi);
	}
	return (-1);
}
