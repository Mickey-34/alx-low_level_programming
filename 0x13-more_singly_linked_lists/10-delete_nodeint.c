#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @index: index of node to delete
 * @head: address of pointer to first node
 * Return: 1 on success,
 * -1 on failure
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *mimi, *old_mimi;
unsigned int m = 0;

if (!head || !*head)
return (-1);
if (!index)
{
mimi = *head;
*head = (*head)->next;
free(mimi);
return (1);
}
mimi = *head;
while (mimi)
{
if (m == index)
{
old_mimi->next = mimi->next;
free(mimi);
return (1);
}
m++;
old_mimi = mimi;
mimi = mimi->next;
}
return (-1);
}
