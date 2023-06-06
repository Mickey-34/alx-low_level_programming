#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given index
 * @n: n value of new node
 * @head: address of pointer to first node
 * @idx: insert new node index
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *mimi, *new_mimi = malloc(sizeof(listint_t));
unsigned int m = 0;

if (!head || !new_mimi)
return (NULL);
new_mimi->n = n;
new_mimi->next = NULL;
if (!idx)
{
new_mimi->next = *head;
*head = new_mimi;
return (new_mimi);
}
mimi = *head;
while (mimi)
{
if (m == idx - 1)
{
new_mimi->next = mimi->next;
mimi->next = new_mimi;
return (new_mimi);
}
m++;
mimi = mimi->next;
}
free(new_mimi);
return (NULL);
}
