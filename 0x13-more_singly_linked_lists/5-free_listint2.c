#include "lists.h"

/**
 * free_listint2 - lists of ints to be freed
 * @head: address of pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *mimi, *star;

if (!head)
return;
mimi = *head;
while (mimi)
{
star = mimi;
mimi = mimi->next;
free(star);
}
*head = NULL;
}
