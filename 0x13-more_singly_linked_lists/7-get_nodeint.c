#include "lists.h"

/**
 * get_nodeint_at_index - node to return at index
 * @index: index to get from node
 * @head: pointer to first node
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *mimi;
unsigned int g;
for (mimi = head, g = 0; mimi && g < index; mimi = mimi->next, g++)
;
return (mimi);
}
