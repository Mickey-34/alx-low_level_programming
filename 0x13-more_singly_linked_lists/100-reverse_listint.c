#include "lists.h"

/**
 * reverse_listint - int list to be reversed
 * @head: address of pointer to first node
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *mimi = NULL, *next = NULL;

if (!head || !*head)
return (NULL);
mimi = *head;
*head = NULL;
while (mimi)
{
next = mimi->next;
mimi->next = *head;
*head = mimi;
mimi = next;
}
return (*head);
}
