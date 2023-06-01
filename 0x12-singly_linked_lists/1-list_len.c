#include "lists.h"

/**
 * list_len - Length of links to be determine
 * @h: pointer to node 1
 * Return: list size
 */
size_t list_len(const list_t *h)
{
size_t homa = 0;

while (h)
{
h = h->next;
homa++;
}
return (homa);
}

