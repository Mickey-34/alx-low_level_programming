#include "lists.h"

/**
 * pop_listint - head node of list to pop
 * @head: address of pointer to first node
 * Return: value of node to be popped
 */
int pop_listint(listint_t **head)
{
listint_t *mimi;
int zero;

if (!head || !*head)
return (0);
mimi = (*head)->next;
zero = (*head)->n;
free(*head);
*head = mimi;
return (zero);
}
