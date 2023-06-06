#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find linked list loop
 * @head: linked list to search
 * Return: address of node where loop begins,
 * NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *zre, *den;

if (head == NULL)
return (NULL);
for (den = head->next; den != NULL; den = den->next)
{
if (den == den->next)
return (den);
for (zre = head; zre != den; zre = zre->next)
if (zre == den->next)
return (den->next);
}
return (NULL);
}

