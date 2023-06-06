#include "lists.h"

/**
 * add_nodeint - adds node to top
 * @n: value of the new node
 * @head: pointer to first node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *mimi = malloc(sizeof(listint_t));
if (!head || !mimi)
return (NULL);
mimi->next = NULL;
mimi->n = n;
if (*head)
mimi->next = *head;
*head = mimi;
return (mimi);
}
