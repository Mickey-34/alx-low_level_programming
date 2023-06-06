#include "lists.h"

/**
 * sum_listint - return sum of all data
 * @head: pointer to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int kola = 0;

while (head)
{
kola += head->n;
head = head->next;
}
return (kola);
}
