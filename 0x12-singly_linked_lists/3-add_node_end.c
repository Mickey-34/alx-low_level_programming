#include "lists.h"

/**
 * *add_node_end - add node to end of list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: Size list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *old_node = malloc(sizeof(list_t));
list_t *tom = *head;

if (!head || !old_node)
return (NULL);
if (str)
{
old_node->str = strdup(str);
if (!old_node->str)
{
free(old_node);
return (NULL);
}
old_node->len = _strlen(old_node->str);
}
if (tom)
{
while (tom->next)
tom = tom->next;
tom->next = old_node;
}
else
*head = old_node;
return (old_node);
}
