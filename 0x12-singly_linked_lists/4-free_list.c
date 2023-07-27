#include "lists.h"
/**
 *free_list - frees a list_t
 *@head: pointer to head of list.
 *Return: 0.
*/
void free_list(list_t *head)
{
	list_t *j;

	while (head != NULL)
	{
		j = head;
		free(j->str);
		head = head->next;
		free(j);
	}
}
