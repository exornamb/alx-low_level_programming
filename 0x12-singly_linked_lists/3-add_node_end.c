#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *jen = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	i->str = strdup(str);
	i->len = len;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (jen->next)
		jen = jen->next;

	jen->next = i;

	return (i);
}
