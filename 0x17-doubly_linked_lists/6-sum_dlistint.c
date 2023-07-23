#include "lists.h"

/**
 * sum_dlistint - sum all items in a doubly-linked list
 * @head: pointer to the beginning of the list
 *
 * Mimi Task 6 to return the sum
 * Return: The sum of all items in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int result_sum = 0;

	for ( ; head; head = head->next)
		result_sum += head->n;

	return (result_sum);
}
