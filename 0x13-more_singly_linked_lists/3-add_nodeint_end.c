#include "lists.h"

/**
 * add_nodeint_end - adss node to bottom
 * @n: value of new node
 * @head: pointer to first node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_mimi = malloc(sizeof(listint_t));
listint_t *mimi;

if (!head || !new_mimi)
return (NULL);
new_mimi->next = NULL;
new_mimi->n = n;
if (!*head)
*head = new_mimi;
else
{
mimi = *head;
while (mimi->next)
mimi = mimi->next;
mimi->next = new_mimi;
}
return (new_mimi);
}
