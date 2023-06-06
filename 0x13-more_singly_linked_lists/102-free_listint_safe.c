#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_f1 - finds loop in link list
 * @head: list linked to search
 * Return: address of node where loop begins/returns,
 * NULL if no loop
 */
listint_t *find_listint_loop_f1(listint_t *head)
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

/**
 * free_listint_safe - frees listint list, even if loops
 * present
 * @h: list head
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *next, *pond;
size_t genz;
int can = 1;

if (h == NULL || *h == NULL)
return (0);
pond = find_listint_loop_f1(*h);
for (genz = 0; (*h != pond || can) && *h != NULL; *h = next)
{
genz++;
next = (*h)->next;
if (*h == pond && can)
{
if (pond == pond->next)
{
free(*h);
break;
}
genz++;
next = next->next;
free((*h)->next);
can = 0;
}
free(*h);
}
*h = NULL;
return (genz);
}
