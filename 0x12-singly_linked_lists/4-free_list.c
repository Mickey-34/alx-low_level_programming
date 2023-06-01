#include "lists.h"

/**
 * free_list - frees all nodes of list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
list_t *pan, *next_pan;

if (!head)
return;
pan = head;
while (pan)
{
next_pan = pan->next;
free(pan->str);
free(pan);
pan = next_pan;
}
}
