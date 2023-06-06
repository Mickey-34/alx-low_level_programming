#include "lists.h"

/**
 * free_listint - list of ints to be freed
 * @head: pointer to first node
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *mimi;

while (head)
{
mimi = head;
head = head->next;
free(mimi);
}
}
