#include "lists.h"
/**
 *add_node - function to add item at the beginning of a linked_list
 *@head: head pointer to linked_list
 *@str: string to add
 *Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *nodes;
unsigned int i = 0;

if (str == NULL)
return (NULL);

nodes = malloc(sizeof(list_t));
if (nodes == NULL)
return (NULL);

nodes->str = strdup(str);
if (nodes->str == NULL)
{
free(nodes);
return (NULL);
}

while (nodes->str[i])
{
i++;
}
nodes->len = i;
nodes->next = *head;
*head = nodes;

return (nodes);
}
