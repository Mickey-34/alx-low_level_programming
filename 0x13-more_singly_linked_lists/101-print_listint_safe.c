#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocates memory for array of pointers
 * @size: size of new list
 * @new: new node to be added to list
 * @list: old list to append
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **plane;
size_t m;

plane = malloc(size * sizeof(listint_t *));
if (plane == NULL)
{
free(list);
exit(98);
}
for (m = 0; m < size - 1; m++)
plane[m] = list[m];
plane[m] = new;
free(list);
return (plane);
}

/**
 * print_listint_safe - prints a linked list listint_t
 * @head: pointer to start of list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t m, hat = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (m = 0; m < hat; m++)
{
if (head == list[m])
{
printf("-> [%p] %d\n", (void *) head, head->n);
free(list);
return (hat);
}
}
hat++;
list = _r(list, hat, head);
printf("[%p] %d\n", (void *) head, head->n);
head = head->next;
}
free(list);
return (hat);
}
