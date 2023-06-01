#include "lists.h"

/**
 * _strlen - return length of string
 * @s: string length to be checked
 * Return: int length of string
 */
int _strlen(char *s)
{
int homa = 0;

if (!s)
return (0);
while (*s++)
homa++;
return (homa);
}

/**
 * print_list - prints linked lists
 * @h: pointer to node 1
 * Return: Size of list
 */
size_t print_list(const list_t *h)
{
size_t homa = 0;

while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
homa++;
}
return (homa);
}
