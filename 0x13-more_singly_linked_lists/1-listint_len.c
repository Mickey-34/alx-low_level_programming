#include "lists.h"

/**
 * listint_len - to print link list
 * @h: pointer to first node
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
size_t m = 0;

while (h)
{
h = h->next;
m++;
}
return (m);
}
