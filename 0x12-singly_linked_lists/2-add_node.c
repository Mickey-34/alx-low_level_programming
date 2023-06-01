#include "lists.h"

/**
 * add_node - add node to start of line
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: List size
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *old_head = malloc(sizeof(list_t));

if (!head || !old_head)
return (NULL);
if (str)
{
old_head->str = strdup(str);
if (!old_head->str)
{
free(old_head);
return (NULL);
}
old_head->len = _strlen(old_head->str);
}
old_head->next = *head;
*head = old_head;
return (old_head);
}
